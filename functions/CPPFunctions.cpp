#include <CPPFunctions.h>
#include "dsp/CQSpectrogram.h"
#include "dsp/CQInverse.h"
#include <iostream>
#include <cstring>
#include <getopt.h>
#include <unistd.h>
#include <sys/time.h>
#include <cstdlib>

// [[Rcpp::export]]
void rcpp_rcout(NumericVector v){
  // printing value of vector
  Rcout << "The value of v : " << v << "\n";

  // printing error message
  Rcerr << "Error message\n";
}


int getFileSize(FILE* inFile)
{
    int fileSize = 0;
    fseek(inFile, 0, SEEK_END);

    fileSize = ftell(inFile);

    fseek(inFile, 0, SEEK_SET);
    return fileSize;
}



// [[Rcpp::export]]
void callSpectrum(){

        typedef struct  WAV_HEADER
        {
            /* RIFF Chunk Descriptor */
            uint8_t         RIFF[4];        // RIFF Header Magic header
            uint32_t        ChunkSize;      // RIFF Chunk Size
            uint8_t         WAVE[4];        // WAVE Header
            /* "fmt" sub-chunk */
            uint8_t         fmt[4];         // FMT header
            uint32_t        Subchunk1Size;  // Size of the fmt chunk
            uint16_t        AudioFormat;    // Audio format 1=PCM,6=mulaw,7=alaw,     257=IBM Mu-Law, 258=IBM A-Law, 259=ADPCM
            uint16_t        NumOfChan;      // Number of channels 1=Mono 2=Sterio
            uint32_t        SamplesPerSec;  // Sampling Frequency in Hz
            uint32_t        bytesPerSec;    // bytes per second
            uint16_t        blockAlign;     // 2=16-bit mono, 4=16-bit stereo
            uint16_t        bitsPerSample;  // Number of bits per sample
            /* "data" sub-chunk */
            uint8_t         Subchunk2ID[4]; // "data"  string
            uint32_t        Subchunk2Size;  // Sampled data length
        } wav_hdr;



         const char *fileName = "dsp/data/filtered-whitenoise-480-14600.wav";

         wav_hdr wavHeader;
         int headerSize = sizeof(wav_hdr), filelength = 0;

             FILE* wavFile = fopen(fileName, "r");
            if (wavFile == nullptr)
            {

              Rcout << " file opened \n";

            }



                //Read the header
                size_t bytesRead = fread(&wavHeader, 1, headerSize, wavFile);
                Rcout << "Header Read " << bytesRead << " bytes." << endl;
                if (bytesRead > 0)
                {
                    //Read the data
                    uint16_t bytesPerSample = wavHeader.bitsPerSample / 8;      //Number     of bytes per sample
                    uint64_t numSamples = wavHeader.ChunkSize / bytesPerSample; //How many samples are in the wav file?
                    static const uint16_t BUFFER_SIZE = 4096;
                    int8_t* buffer = new int8_t[BUFFER_SIZE];
                    while ((bytesRead = fread(buffer, sizeof buffer[0], BUFFER_SIZE / (sizeof buffer[0]), wavFile)) > 0)
                    {
                        /** DO SOMETHING WITH THE WAVE DATA HERE **/
                        Rcout << "Read " << bytesRead << " bytes." << endl;
                    }
                    delete [] buffer;
                    buffer = nullptr;
                    filelength = getFileSize(wavFile);
//
                     Rcout << "File is                    :" << filelength << " bytes." << endl;
                     Rcout << "RIFF header                :" << wavHeader.RIFF[0] << wavHeader.RIFF[1] << wavHeader.RIFF[2] << wavHeader.RIFF[3] << endl;
                     Rcout << "WAVE header                :" << wavHeader.WAVE[0] << wavHeader.WAVE[1] << wavHeader.WAVE[2] << wavHeader.WAVE[3] << endl;
                     Rcout << "FMT                        :" << wavHeader.fmt[0] << wavHeader.fmt[1] << wavHeader.fmt[2] << wavHeader.fmt[3] << endl;
//                     Rcout << "Data size                  :" << wavHeader.ChunkSize << endl;
//
//
                     Rcout << "Sampling Rate              :" << wavHeader.SamplesPerSec << endl;
//                     Rcout << "Number of bits used        :" << wavHeader.bitsPerSample << endl;
                     Rcout << "Number of channels         :" << wavHeader.NumOfChan << endl;
                     Rcout << "Number of bytes per second :" << wavHeader.bytesPerSec << endl;
                     Rcout << "Data length                :" << wavHeader.Subchunk2Size << endl;
                     Rcout << "Audio Format               :" << wavHeader.AudioFormat << endl;
//
//
//                     Rcout << "Block align                :" << wavHeader.blockAlign << endl;
//                     Rcout << "Data string                :" << wavHeader.Subchunk2ID[0] << wavHeader.Subchunk2ID[1] << wavHeader.Subchunk2ID[2] << wavHeader.Subchunk2ID[3] << endl;
//
                 }

            fclose(wavFile);
}


// [[Rcpp::export]]
LogicalVector searchWordInVectorOfWords2(StringVector x,string word) {
    LogicalVector v1(x.size());
    for( int i = 0 ; i < x.size(); i++) {
          if( word.compare(x[i]) == 0 ) {
             v1[i] = 1;
          } else {
              string vv = as<string> (x[i]);
              if( vv.size() < word.size() ) {
                  if(word.substr(0,vv.size()).compare(vv) == 0) {
                      v1[i] = 1;
                  }
              } else {
                 if(vv.substr(0,word.size()).compare(word) == 0) {
                     v1[i] = 1;
                 }
             }
          }
    }
    return v1;
}

// [[Rcpp::export]]
int searchWordInVectorOfWords(string word,StringVector searchWords) {
    int occurences = 0;
    for(StringVector::iterator wordIterate = searchWords.begin(); wordIterate != searchWords.end() && word.size() != 0; ++wordIterate) {
        string searchWord = as<string> (*wordIterate);
        occurences +=   word.compare(searchWord) == 0  ||
                        ( searchWord.size() < word.size() &&
                          word.substr(0,searchWord.size()).compare(searchWord) == 0);
     }
    return occurences;
}

// [[Rcpp::export]]
int searchWordInText(std::string text, StringVector searchWords) {
    int occurences = 0;
    for(StringVector::iterator wordIterate = searchWords.begin(); wordIterate != searchWords.end()  && text.size() != 0 ; ++wordIterate) {
        string searchWord = as<string> (*wordIterate);
        occurences += (text.find(searchWord) !=std::string::npos) &&
                      searchWord.size() > 0;
     }
    return occurences;
}
// [[Rcpp::export]]
StringVector getTagsRcpp() {
  return TAGS_WORDS;
}

// [[Rcpp::export]]
StringVector getTagsIdRcpp() {
  return TAGS_ELEMENT_ID;
}


// [[Rcpp::export]]
StringVector getTagsNavigationRcpp() {
  return TAGS_ELEMENT_LIST_NAVIGATION;
}

// [[Rcpp::export]]
StringVector getTagsByNameRcpp( string tagName) {
  return TAG_MAPS[tagName];
}


// [[Rcpp::export]]
map<string, StringVector> getTagsMapRcpp( ) {
  return TAG_MAPS;
}

// [[Rcpp::export]]
List getTagsMapHierarchyRcpp( ) {
  return TAG_MAPS_HIERARCHY;
}

// [[Rcpp::export]]
List getTagsByName2LevelsRcpp( string tagName0,  string tagName1 ) {
  return as<List>(TAG_MAPS_HIERARCHY[tagName0])[tagName1];
}


// [[Rcpp::export]]
List getTagsByName3LevelsRcpp( string tagName0,  string tagName1 ,  string tagName2) {
   return as<List>( as<List>(TAG_MAPS_HIERARCHY[tagName0])[tagName1])[tagName2];
}


// [[Rcpp::export]]
string oneHotEncodingText(string text) {
    StringVector tags = getTagsRcpp();
    string oneHot = "";
    for(StringVector::iterator tagIterate = tags.begin(); tagIterate != tags.end()  && text.size() != 0 ; ++tagIterate) {
        string searchTag = as<string> (*tagIterate);
        oneHot += to_string(text.find(searchTag) !=std::string::npos && searchTag.size() > 0);
     }
    return oneHot;
}

// [[Rcpp::export]]
unsigned long long oneHotEncodingTextLong(string text) {
    StringVector tags = getTagsRcpp();
    string oneHot = "";
    for(StringVector::iterator tagIterate = tags.begin(); tagIterate != tags.end()  && text.size() != 0 ; ++tagIterate) {
        string searchTag = as<string> (*tagIterate);
        oneHot += to_string(text.find(searchTag) !=std::string::npos && searchTag.size() > 0);
     }
//    return stoi(oneHot, nullptr, 410);
      return stoull (oneHot);
}



//# library(Rcpp)
//# sourceCpp("SDD/localCDMShinyDashBoard/functions/CPPFunctions.cpp")

