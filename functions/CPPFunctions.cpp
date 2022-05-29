#include <CPPFunctions.h>
#include "dsp/CQSpectrogram.h"
#include "dsp/CQInverse.h"
#include <iostream>
#include <cstring>
#include <getopt.h>
#include <unistd.h>
#include <sys/time.h>
#include <cstdlib>

#include "dsp/Window.h"
//#include "dsp/CQBase.h"

#include <cmath>
#include <vector>
#include <iostream>
#include <Rcpp/Benchmark/Timer.h>

using std::vector;
using std::cerr;
using std::endl;
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN



// Set up fs/2 = 50, frequency range 10 -> 40 i.e. 2 octaves, fixed
// duration of 2 seconds
static const double sampleRate = 100;
static const double cqmin = 10;
static const double cqmax = 40;
static const double bpo = 4;
static const int duration = sampleRate * 2;
// Threshold below which to ignore a column completely
static const double threshold = 0.08;
typedef vector<vector<complex<double>>> ComplexBlock;


// [[Rcpp::export]]
List testCQTime1(NumericVector signal, int sampleRate, bool isStereo, bool isPCM, int binsPerOctave = 12)
{

    Timer timer;
    timer.step("start");

//binsPerOctave ??
//https://librosa.org/doc/latest/generated/librosa.cqt.html
//https://dsp.stackexchange.com/questions/54883/how-can-i-calculate-the-number-of-bins-per-octave

int maxFrequency = sampleRate / 3;
int minFrequency = 100;

CQParameters params(sampleRate, minFrequency, maxFrequency, binsPerOctave);
ConstantQ cq(params);
CQInverse cqi(params);


  Rcerr << "max freq = " << cq.getMaxFrequency() << ", min freq = " << cq.getMinFrequency() << ", octaves = " << cq.getOctaves() << endl;

    Rcerr << "octave boundaries: ";
    for (int i = 0; i < cq.getOctaves(); ++i) {
	  Rcerr << cq.getMaxFrequency() / pow(2, i) << " ";
    }
    Rcerr << endl;

    int latency = cq.getLatency() + cqi.getLatency();
    Rcerr << "forward latency = " << cq.getLatency() << ", inverse latency = "   << cqi.getLatency() << ", total = " << latency << endl;


    timer.step("input preparation");
      vector<double> cqin;
      for(NumericVector::iterator i = signal.begin(); i != signal.end(); ++i) {
          cqin.push_back(*i);
      }

     vector<double> buffer;

    timer.step("CQ process");
    ComplexBlock  cqout = cq.process(cqin);


    timer.step("end");
    Rcout << "The value of v : " << cqout.size() << "\n";
    Rcout << "The value of v : " << cqout[0].size() << "\n";

    NumericVector res(timer);
    NumericVector timeDifference = diff(res);

    for( NumericVector::iterator it = timeDifference.begin(); it != timeDifference.end() ; ++it) {
       Rcout << "Run time = " << *it << endl;
    }


  return wrap(cqout);
}

//"functions/dsp/data/filtered-whitenoise-480-14600.wav" %>%  tuneR::readWave() -> vv
//testCQTime1( vv@left, vv@samp.rate, vv@stereo, vv@pcm, 12
//http://arma.sourceforge.net/docs.html#for_each


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

//# library(Rcpp)
//# sourceCpp("functions/CPPFunctions.cpp")

