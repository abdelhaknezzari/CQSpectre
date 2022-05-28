#include <Rcpp.h>

using namespace Rcpp;
using namespace std;



const StringVector TAGS_ELEMENT_ID_APPROVE = {
 "approval",
 "approve",
 "approveBtn",
 "approveForRealization",
 "APPROVED_FOR_DEPLOYMENT",
 "Approved",
 "APPROVED_FOR_DEPLOYMENT",
 "Ready",
 "approvePopupText",
 "approveSetToNotPlannedBtn",
 "approveSplitBtn",
 "approveTitle",
 "Accept",
 "Approve",
 "approved",
 "Approved",
 "approving"
 };


 const StringVector TAGS_ELEMENT_ID_DETAIL = {
    "DetailPriorityStatus",
    "DetailProjectStatus",
    "DetailReleaseVersionDatesStatus",
    "DetailReleaseVersionHBox",
    "DetailReleaseVersionNameStatus",
    "DetailReleaseVersionTitleStatus",
    "Details",
    "DetailScopeStatus",
    "detailsFooterToolbar",
    "DetailWorkstreamStatus",
    "CloseDetail"
  };

   const StringVector TAGS_ELEMENT_ID_COMBO_BOX = {
      "DetailScopeComboBoxId",
          "DetailScopeComboBoxId",
          "transportComboBoxId",
          "solutionVariantComboBoxId",
          "workstreamComboBoxId",
          "priorityComboBoxId",
          "projectComboBoxId",
          "scopeComboBoxId",
          "statusComboBoxId",
          "ascendingly",
          "combobox",
          "comboBox",
          "comboboxes",
          "comboBoxes",
          "noSolutionVariantAssigned",
          "notAssigned",
          "Scope"

    };


 const StringVector TAGS_ELEMENT_ID_DETAILS = {
    "DetailPriorityStatus",
    "DetailProjectStatus",
    "DetailReleaseVersionDatesStatus",
    "DetailReleaseVersionHBox",
    "DetailReleaseVersionNameStatus",
    "DetailReleaseVersionTitleStatus",
    "Details",
    "DetailScopeStatus",
    "detailsFooterToolbar",
    "DetailWorkstreamStatus"
  };



   const StringVector TAGS_ELEMENT_ID_HISTORY = {
   "History",
   "HISTORY_LONGTEXT",
   "HISTORY_PRIORITY",
   "HISTORY_RELEASE_VERSION",
   "HISTORY_SCOPE",
   "HISTORY_SOLUTION_PROCESS_DELETED",
   "HISTORY_SOLUTION_PROCESS_NAME_UPDATED",
   "HISTORY_STATUS",
   "HISTORY_TITLE",
   "HISTORY_TITLE_USER_STORY",
   "HISTORY_TRANSPORT_ASSIGNED",
   "HISTORY_TRANSPORT_DEPLOY_REPAIRED",
   "HISTORY_TRANSPORT_DEPLOYED",
   "HISTORY_TRANSPORT_UNASSIGNED",
   "HISTORY_TRANSPORTS_ASSIGNED",
   "HISTORY_TRANSPORTS_DEPLOYED",
   "HISTORY_TRANSPORTS_RELEASED",
   "HISTORY_WORKSTREAM",
   "historyBtnTooltip",
   "historyButton",
   "historyCloseButton",
   "historySubtitle",
   "historyTitle",
   "historyToggleFullScreen",
   "ChangeHistory",
   "changeType",
   "history",
   "formerMember",
   "mock@mock.com",
   "userServiceNotWorking",
   "objectFeature",
   "userName",
   "(Not Assigned)",
   "changedTime",
   "clickable"

    };

       const StringVector TAGS_ELEMENT_ID_TOGGLES = {
            "imp_cdm_cTMSTransportAssignment",
            "imp_cdm_DisableDeployButton",
            "imp_cdm_ExpTransReq",
            "imp_cdm_MessPopoverValidation",
            "imp_cdm_ProdDeploymentError",
            "imp_cdm_ReactivateProcRel",
            "imp_cdm_Release_TR",
            "imp_cdm_ReleaseVersion",
            "imp_cdm_TRBtnState",
            "deactivated",
            "Validation"
         };

       const StringVector TAGS_ELEMENT_ID_ICONS = {
            "sap-icon://calm-icons/priority-high",
            "sap-icon://calm-icons/priority-low",
            "sap-icon://calm-icons/priority-medium",
            "sap-icon://calm-icons/priority-very-high",
            "sap-icon://download",
            "sap-icon://exit-full-screen",
            "sap-icon://full-screen",
            "sap-icon://message-information",
            "sap-icon://past",
            "sap-icon://sort",
            "sap-icon://synchronize"
       };

const StringVector TAGS_ELEMENT_ID_CTMS = {
"CTMS_PROD",
"CTMS_SOURCE_FORWARD_MODE_MANUAL",
"CTMS_TEST",
"CTMS_TRANSPORT_NOT_KNOWN_IN_TARGET",
"Synchronization",
"ctms",
"cTMS",
"CTMS"

};

const StringVector TAGS_ELEMENT_ID_TRANSPORTS = {
"ImportTransports",
"transportAssignButton",
"transportDeployMessage",
"transportDeployTitle",
"transportImportButton",
"transportListNoDataText",
"transportMorePopover",
"transportNoData",
"transportParallelAssignmentErrorMessage",
"transportParallelErrorTitle",
"transportRefreshButton",
"transportRefreshTooltip",
"transportReleaseButton",
"transportReleaseMessage",
"transportReleaseTitle",
"transportsInvisibleText",
"transportTableSelectDialogTitle",
"transportUpdateFailed",
 "Ready",
 "assign/unassign",
 "DEV",
 "isActive",
 "ABAP system",
 "unassign",
 "Unassign",
 "unassigning"

};


const StringVector TAGS_ELEMENT_ID_CTS_TRANSPORTS = {
 "ABAP system"
};


const StringVector TAGS_ELEMENT_ID_SOLUTION = {
"Solution",
"solutionVariant",
"solutionVariantCountryTitle",
"solutionVariantId",
"solutionVariantInvisibleText",
"solutionVariantLabel",
"solutionVariantLinkTooltip",
"solutionVariantName",
"solutionVariantTitle"
};


const StringVector TAGS_ELEMENT_ID_GROUPING = {
"groupBy",
"groupDialogTitle",
"groupingBtn",
"groupOrder",
"Ascending",
"featureListGroupingTooltip",
"group",
"grouped",
"grouping",
"Ascending",
"Descending",
"noneEntryWithParenthesesForTest"
};


const StringVector TAGS_ELEMENT_SORTING = {
"featureListSortingTooltip",
"Ascending",
"Descending"
};


const StringVector TAGS_ELEMENT_ID_SORTING = {
"sortBy",
"sortDialogTitle",
"sortingBtn",
"sortOrder"
};

const StringVector TAGS_ELEMENT_ID_WORKSTREAM = {
"workstream",
"Workstream",
"workstreamFilter",
"workstreamId",
"workstreamInvisibleText",
"workstreamLabel",
"Customer",
"NTOP",
"Architecture"
};

const StringVector TAGS_ELEMENT_ID_ERRORS = {
"REPAIRED_TRANSPORT_NOT_ASSIGNED_TO_FEATURE",
"REPAIRED_TRANSPORT_STATUS_IS_NOT_FAILED",
"RELEASE_TRANSPORTS_INCONSISTENT_UNASSIGNMENT",
"STATUS_CHANGED_FAIL_REQ_DELETED",
"TRANSPORT_IMPORT_ALREADY_REPAIRED",
"TRANSPORT_NOT_FOUND",
"SAVE_REQUIREMENT_DOES_NOT_EXIST",
"IMPORT_TRANSPORTS_INCONSISTENT_ASSIGNMENT",
"IMPORT_TRANSPORTS_INCONSISTENT_UNASSIGNMENT",
"IMPORT_TRANSPORTS_PROD_DEPLOY_NOT_ALLOWED",
"MESSAGING_LIBRARY_NOT_AVAILABLE",
"FAILED_DEPLOY_TRANSPORTS_FOUND",
"EXCEPTION_TECHNICAL_INFO_BACKEND",
"FEATURE_WAS_DELETED",
"FEATURE_WAS_DELETED_TITLE",
"USER_MANAGEMENT_NOT_AVAILABLE",
"INTERNAL_SERVER_ERROR",
"DELETED_NODE_CTMS_ERROR",
"SCOPE_DOES_NOT_EXIST",
"NO_TITLE_WAS_PROVIDED",
"error"
};

const StringVector TAGS_ELEMENT_ID_EVENTS = {
"TRIGGER_EVENT_REQ_DELETED",
"TRIGGER_EVENT_REQ_TITLE_CHANGED",
"TRIGGER_EVENT_TASK_TITLE_CHANGED"
};


const  StringVector TAGS_ELEMENT_ID_DESCRIPTION = {
"longTextContent",
"LongTextContent",
"longTextMorePopover",
"anotherLongTextContent",
"noDescription",
"LongText"
};

const  StringVector TAGS_ELEMENT_ID_STATUS = {
"NOT_PLANNED",
"IN_REALIZATION",
"APPROVED_FOR_DEPLOYMENT",
"CONFIRMED",
"CREATED",
"Deployed",
"Confirmed",
"create",
"statusConfirmed",
"statusCreated",
"statusInRealization",
"statusNotPlanned",
"featureStatus",
"FeatureStatus"
};

const StringVector TAGS_ELEMENT_BUTTON = {
"Buttonstate",
"buttonId",
"ButtonId",
"Cancel",
"cancelBtn",
"cancelButtonFooter",
"discardButton",
"navBackButton",
"changeStatusInSpecificationBtn",
"createTaskBtnId",
"createButton",
"okBtn",
"featureTraceNavigationBtn",
"exportBtn",
"closeDetailsBtn",
"closeFeatureDetailsBtn",

};


const StringVector TAGS_ELEMENT_URLS = {
"/create",
"/details",
"/history",
"url",
"URL"

};


const StringVector TAGS_ELEMENT_ERROR_POPUP = {
"discardDialogText",
"featureDeleteText",
"featureDeleteTitle",
"errorMessage",
"saveErrorTitle",
"error"
};


const StringVector TAGS_ELEMENT_POPOVER = {
"discardPopOverMessageCreate",
"discardPopOverMessageEdit",
"discard"
};


const StringVector TAGS_ELEMENT_SEARCH = {
"Business",
"SearchTooltipForFeatures",
"searchValue",
"search",
"noMatching"
};

const StringVector TAGS_ELEMENT_TRANSPORT_ASSIGN = {
"Searchfield",
"featureTableLoading",
"assgning",
"assign",
"Assign",
"assigned",
"Assigned",
"assigning",
"assignment",
"Assignment",
"Assign-Dialog"
};


const StringVector TAGS_ELEMENT_TOAST = {
"changeStatusInSpecificationSuccess",
"changeStatusNotPlannedSuccess",
"createSuccess",
"deleteSuccess",
"saveSuccess",
"approveConfirmSuccess",
"approveForDeploymentSuccess",
"approveForRealizationSuccess"
};


const StringVector TAGS_ELEMENT_DELETE = {
"Delete",
"deleteFeature"
};



const StringVector TAGS_ELEMENT_DETAIL_EDIT = {
"New Feature",
"editFeature",
"editTitle",
"emptyTitle",
"*newTitle",
"featureTitle",
"newTitle",
"noteHeaderCategorizationLabel",
"releaseVersion",
"releaseVersionInputId",
"releaseVersionLabel",
"saveCloseFeature",
"saveStayFeature",
"saveFeature",
"priorityLabel",
"prioritySelectId",
"priorityText"
};

const StringVector TAGS_ELEMENT_DETAIL_DISPLAY = {
"descriptionSectionTitle",
"enterFullScreenMode",
"exitFullScreenMode",
"ExpandFullScreen",
"handleFullScreen",
"priorityColor",
"priorityIcon",
"title"
};


const StringVector TAGS_ELEMENT_DETAIL_SECTION = {
"section",
"Section"
};

const StringVector TAGS_ELEMENT_DETAIL_DISPLAY_RELATION = {
 "featureDetailRelationsSolutionVariant",
 "Relations",
 "relationsSectionTitle"
};


const StringVector TAGS_ELEMENT_FEATURE_LIST = {
"countryRegion",
"exportTooltipForFeatures",
"featureListCreateTooltip",
"featureListObjectTitle",
"featureListTableHeader",
"featureTableNoDataText",
"featureTableNoMatching",
"featureTransports",
"nbEntries",
"scopeName",
"scroll",
"feature list",
"row should contain field"
};



const StringVector TAGS_ELEMENT_LIST_NAVIGATION = {
"featureTraceNavigationBtn",
"analytics",
"Analytics",
"AnalyticsApps"
};

const StringVector TAGS_ELEMENT_FEATURE_TILE = {
"Features",
"featureServiceUnavailable"
};


const StringVector TAGS_ELEMENT_SCOPE_ROLE = {
"invalid_scope",
"projectLead",
"projectViewer",
"user",
"User",
"authorization"
};


const StringVector TAGS_ELEMENT_LEAVE_POPUP = {
"leavePage",
"popOverCancelId",
"popOverTitleId"
};


const StringVector TAGS_ELEMENT_POPUP = {
"releaseDialogFlexBoxId"
};



const StringVector TAGS_ELEMENT_BACKEND = {
"List",
"Scopes",
"Details",
"ImportTransports",
"update",
"Synchronization",
"Transports",

"reachable",
"backend",
"available",
"mock",
"service",
"endpoint"
};


const StringVector TAGS_ELEMENT_TASKS = {
"menuId",
"menuItemCreateProjectTask",
"menuItemCreateUserStory",
"taskType"
};


const StringVector TAGS_ELEMENT_NAVIGATION = {
"AnalyticsApps",
"featureTraceNavigationBtn",
"navigate",
"navigateRelatedEntity",
"calmcontext"
"calm",
"context",
"navigate",
"Navigate",
"navigated",
"navigateRelatedEntity",
"Navigating",
"navigation"
};

const StringVector TAGS_ELEMENT_FILTER = {
"statusFilter",
"collapse",
"expand",
"scopeId",
"statusId",
"(Not Assigned)",
"filter",
"Filter",
"filtered",
"Filtered",
"filtering",
"Filtering",
"filters"
};

//-----------------------
const StringVector TAGS_ELEMENT_BROWSER = {
"window"
};



 const StringVector TAGS_ELEMENT_RELEASE_VERSION = {
    "DetailReleaseVersionDatesStatus",
    "DetailReleaseVersionHBox",
    "DetailReleaseVersionNameStatus",
    "DetailReleaseVersionTitleStatus",
    "version",
    "Version",
    "versions"
  };


   const StringVector TAGS_ELEMENT_EXPORT = {
      "excel",
      "exported",
      "export",
      "file",
      "table header",
      "downloaded",
      "remove"
    };




 const StringVector TAGS_ELEMENT_TRANSPORT_TABLE = {
  "transport table",
  "transport status"
  };



 const StringVector TAGS_ELEMENT_TITLE_INPUT = {
  "dirty indicator",
  "dirty"
  };


   const StringVector TAGS_ELEMENT_BUSY_INDICATOR = {
     "busy indicator",
     "busy"
    };


       const StringVector TAGS_ELEMENT_FILTER_INDICATOR = {
          "filter indicator"

        };



const StringVector TAGS_ELEMENT_FEATURE_LIST_BUTTON = {
"createButton",

};


const StringVector TAGS_ELEMENT_TRANSPORT_BUTTON = {
 "repair button",
 "transport Deploy button",
 "transportImportButton",
 "unassign button",
 "transportRefreshButton",
 "transportReleaseButton",
 "transportAssignButton",
 "transport Refresh",
"repair",
"repaired",
"repairing"
 };


//-----------------

const StringVector TAGS_ELEMENT_ID = {
"Scope",
"status",
"TEST",

"projectId",
"notSee",
"None",
"Feature",
"activated",
"active",
"Display/Edit"
};



const StringVector TAGS_WORDS = {

"inactive",

"valid",
"Valid Title",
"visibility",
"unreachable",
"Germany",
"'cancel",
"#NAME?",
"(big",
"(from",
"(Scope",

"accessing",
"action",
"Activating",
"activation",
"actual",
"adapt",
"adapted",
"add",
"Add",
"additional",
"Adoption",
"affect",
"After",
"alert",

"And",
"app",
"appears",
"application",
"Application",
"applied",


"apply",
"applying",


"area",
"Area",



"asynchrounously",
"Australia",

"AUTO",
"available",
"back",
"Back",

"bar",
"belonging",
"big",
"binding",
"box",
"boxes",
"break",
"broken",
"browser",
"Browser",
"business",
"buttom",
"button",
"Button",
"buttons",


"cancel",
"canceled",
"canceling",
"Canceling",
"capabilities",
"card",
"case",
"chanel",
"change",
"Change",
"changed",
"Changed",

"changes",
"changing",
"Changing",
"characters",
"check",
"Check",
"checkbox",
"checkboxes",
"Checking",
"China",
"clear",
"click",
"Click",

"clicked",
"clicking",
"Clicking",
"close",
"Close",
"closed",
"closing",
"Closing",
"collapse",
"collapsing",
"Collapsing",
"color",
"column",
"columns",
"combinations",
"combine",
"combo",
"coming",
"component",
"Configuration",
"confirmation",
"Confirmation",
"confirmed",
"considered",
"contain",
"content",
"context",
"continue",
"control",
"Control",
"corner",
"correct",
"Correct",
"correcting",
"correctly",
"Counter",
"countries",
"country",
"Create",
"created",
"creating",
"Creating",
"creation",
"criteria",
"current",
"customized",
"data",
"date",
"default",
"defined.",
"delete",
"deleted",
"deleting",
"deletion",
"delivery",
"depending",
"deploy",
"Deploy",
"deployed",
"Deployed",
"deploying",
"Deploymenent",
"deployment",
"Deployment",
"deployments",
"descending",
"description",
"Description",
"Design",
"desired",
"destroy",
"detail",
"Detail",
"details",
"diagnostics",
"dialog",
"directly",
"dirty",
"Dirty",
"Disable",
"disabled",
"disappear",
"disappeared",
"discarding",
"display",
"Display",
"displayed",
"displaying",
"displayView",
"download",

"dropbox",
"dropdown",
"duplicate",
"duplicated",
"edit",
"Edit",
"editing",
"editor",
"Editor",
"editView",
"element",
"email",
"empty",
"emptyIndicatorMode",
"empy",
"enabled",
"Enablement",
"end",

"entering",
"entity",
"entries",
"entry",
"Entry",
"errors",
"escaped",
"event",

"exception",
"executed",
"existing",
"exit",
"expand",
"expanding",
"Expanding",
"expect",
"expected",


"fail",
"failed",
"Failed",
"feature",
"featureId",
"features",
"Feb",
"field",
"Field",

"filled",

"final",
"finished",
"first",
"fiters",
"Fixed",
"flag",
"flexible",
"focus",
"footer",
"For",
"foreign",
"format",
"forward",
"forwarded",
"found",
"France",
"free",
"From",
"full",
"Fullscreen",
"Fullscreenbutton",
"General",
"generated",
"generator)",
"Generic",
"header",
"Header",
"headers",
"hidden",
"hide",
"High",

"hitting",
"Horizon",
"HTML",
"icon",
"Icon",
"immediatly",
"immeditly",
"Implementation",
"import",
"ImportInProgress",
"include",
"incorrect",
"index",

"influence",
"info",
"infobar",
"Infobar",
"information",
"Information",
"Infrastructure",
"initial",
"input",
"Input",
"integrated",
"invalid",
"invisible",
"item",
"Item",
"items",
"keeping",
"key",
"keys",
"label",
"landscape",
"launchpad",
"Launchpad",
"layout",
"leads",
"leave",
"leaving",
"left",
"length",
"library",
"line",
"lines",
"link",
"list",
"list)",
"list>save",
"Live",
"lmnop",
"loaded",
"Loading",

"log",
"logs",
"long",


"Low",
"maintained",
"management",
"Management",
"MANUAL",
"mark",
"matching",
"Matching",
"Medium",
"menu",
"message",
"messages",
"middle",
"Middle",
"minutes",
"missing",

"mode",
"Mode",
"Modifiable",
"modified",
"More",
"multi",
"multipe",
"multiple",
"Name",
"names:<project",
"names:<project,featureTransports",
"names:<project,priority",
"names:<project,scope",
"names:<project,scope,status",
"names:<project,scope,workstream",
"names:<project,status",
"names:<project,workstream",
"names:<searchTerm,project,scope,status,priority,workstream",

"Negative",
"Netherlands",
"newly",
"node",
"nodes",
"Not",
"number",
"Object",
"occur",
"OFF",
"Ok",
"OK",
"once",
"open",
"Open",
"opened",
"opening",
"Opening",
"opens",
"option",
"options",
"order",
"Order",
"ordered",
"original",
"Outline",
"OVP",
"page",
"parallel",
"Parallel",
"parameter",
"parameters",
"parenthesis",
"partly",
"pending",
"perform",
"persist",
"placeholder",
"planned",
"Planned",
"popover",
"populated",
"popup",
"position",
"Positive",
"possible",
"prepare",
"present.",
"press",
"pressed",
"pressing",
"Pressing",
"previous",
"priority",
"Priority",
"process",
"Process",
"processes",
"project",
"Project",
"projects",
"raise",
"ratio",
"reached",
"read",
"read-only",
"ready",
"realization",
"reassigned",
"reflected",
"refresh",
"Refresh",
"Refreshing",
"related",
"relation",
"relations",
"release",
"Release",
"releases",
"releasing",
"remains",



"req",
"request",
"requests",
"requirement",
"Requirement",
"requirment",
"reset",
"reseted",
"result",
"results",
"retrieve",
"retrieved",
"return",
"returns",
"rich",
"Rich",
"RichText",
"role",
"Role",
"routes",
"row",
"sanitized",
"save",
"Save",
"save&continue",
"saved",
"saving",
"Saving",
"Scenario",
"scheduled",
"scope",
"ScopeId",
"scopes",
"scoping",
"screen",
"scroll",
"section",
"Section",
"seed",
"select",
"Select",
"selected",
"selecting",
"Selecting",
"selection",
"Selection",
"Sell",
"send",
"sending",
"sends",

"session",
"set",
"Set",
"setting",
"short",
"shoud",
"Should",
"show",
"Show",
"shown",
"shows",
"side",
"size",
"snapped",
"solution",
"sort",
"Sort",
"sorted",
"sorting",
"spain",
"Spain",
"Specification",
"split",
"start",
"startup",
"state",
"Status",
"statuses",
"stay",
"Stock",
"structure",
"subtitle",
"Support",
"switch",
"Switch",
"switching",
"synchronise",
"Synchronize",
"synchronizing",
"system",
"systems",
"table",
"Table",
"tabs",
"target",
"targetSystem",
"task",
"Task",
"tasks",
"Tea",
"Team",
"technical",
"tenant",
"tenantRoles",
"test",
"Test",
"text",
"Text",
"texts",
"The",
"There",
"throw",
"tile",
"time",
"Title",
"toast",
"toggle",
"TOGGLE",
"toolbar",
"tooltip",
"top",
"topic",
"total",
"TQM",
"traceability",
"Traceability",
"translated",
"transport",
"Transport",
"transport(s)",
"transports",
"Transports",
"trigger",
"triggered",
"Two",
"type",
"typing",
"uncheck",
"unescaped",
"unselect",
"Unselecting",
"update",
"updated",

"value",
"values",

"Very",
"view",
"View",
"View.",
"viewer",
"Viewer",
"visibibility",
"visible",
"wait",
"warning",
"While",
"whitespace",
"width",

"work",
"workflow",
"Workstream)",
"You"
};

map<string, StringVector> TAG_MAPS {
    { "TAGS_ELEMENT_BUTTON" , TAGS_ELEMENT_BUTTON },
    { "TAGS_ELEMENT_URLS" , TAGS_ELEMENT_URLS },
    { "TAGS_ELEMENT_ERROR_POPUP" , TAGS_ELEMENT_ERROR_POPUP },
    { "TAGS_ELEMENT_POPOVER" , TAGS_ELEMENT_POPOVER },
    { "TAGS_ELEMENT_SEARCH" , TAGS_ELEMENT_SEARCH  },
    { "TAGS_ELEMENT_TRANSPORT_ASSIGN" , TAGS_ELEMENT_TRANSPORT_ASSIGN },
    { "TAGS_ELEMENT_TOAST" , TAGS_ELEMENT_TOAST  },
    { "TAGS_ELEMENT_DELETE" ,TAGS_ELEMENT_DELETE  },
    { "TAGS_ELEMENT_DETAIL_EDIT" ,TAGS_ELEMENT_DETAIL_EDIT  },
    { "TAGS_ELEMENT_DETAIL_DISPLAY" ,TAGS_ELEMENT_DETAIL_DISPLAY  },
    { "TAGS_ELEMENT_DETAIL_SECTION" ,TAGS_ELEMENT_DETAIL_SECTION  },
    { "TAGS_ELEMENT_DETAIL_DISPLAY_RELATION" ,TAGS_ELEMENT_DETAIL_DISPLAY_RELATION  },
    { "LIST" , TAGS_ELEMENT_FEATURE_LIST },
    { "TAGS_ELEMENT_LIST_NAVIGATION" ,TAGS_ELEMENT_LIST_NAVIGATION  },
    { "TAGS_ELEMENT_FEATURE_TILE" ,TAGS_ELEMENT_FEATURE_TILE  },
    { "TAGS_ELEMENT_SCOPE_ROLE" , TAGS_ELEMENT_SCOPE_ROLE },
    { "TAGS_ELEMENT_LEAVE_POPUP" ,TAGS_ELEMENT_LEAVE_POPUP  },
    { "TAGS_ELEMENT_POPUP" , TAGS_ELEMENT_POPUP },
    { "TAGS_ELEMENT_BACKEND" ,TAGS_ELEMENT_BACKEND  },
    { "TAGS_ELEMENT_TASKS" ,TAGS_ELEMENT_TASKS  },
    { "TAGS_ELEMENT_NAVIGATION" , TAGS_ELEMENT_NAVIGATION },
    { "TAGS_ELEMENT_FILTER" ,TAGS_ELEMENT_FILTER  },
    { "TAGS_ELEMENT_ID", TAGS_ELEMENT_ID},
    { "TAGS_WORDS",TAGS_WORDS },
    { "TAGS_ELEMENT_BROWSER",TAGS_ELEMENT_BROWSER},
    { "TAGS_ELEMENT_RELEASE_VERSION",TAGS_ELEMENT_RELEASE_VERSION},
    { "TAGS_ELEMENT_EXPORT",TAGS_ELEMENT_EXPORT},
    { "TAGS_ELEMENT_TRANSPORT_TABLE",TAGS_ELEMENT_TRANSPORT_TABLE},
    { "TAGS_ELEMENT_TITLE_INPUT",TAGS_ELEMENT_TITLE_INPUT},
    { "TAGS_ELEMENT_BUSY_INDICATOR",TAGS_ELEMENT_BUSY_INDICATOR},
    { "TAGS_ELEMENT_FILTER_INDICATOR",TAGS_ELEMENT_FILTER_INDICATOR},
    { "TAGS_ELEMENT_FEATURE_LIST_BUTTON",TAGS_ELEMENT_FEATURE_LIST_BUTTON},
    { "TAGS_ELEMENT_TRANSPORT_BUTTON",TAGS_ELEMENT_TRANSPORT_BUTTON}
};

List TAG_FILTERS = List::create( Named("SEARCH_INPUT") = "ACTIONS" ,
                                 Named("FILTER_INDICATOR") = "ACTIONS" ,
                                 Named("COMBO_BOX") =
                                        List::create( Named("PROJECT") = "ACTIONS" ,
                                                      Named("SCOPE") = "ACTIONS" ,
                                                      Named("STATUS") = "ACTIONS",
                                                      Named("PRIORITY") = "ACTIONS",
                                                      Named("WORK_STREAM") = "ACTIONS",
                                                      Named("TRANSPORTS") = "ACTIONS" ) );

List TAG_FEATURE_LIST = List::create(  Named("ALL") = "ALL",
                                       Named("BUTTONS") = List::create( Named("CREATE") = "ACTIONS" ,Named("SORT") = "ACTIONS" , Named("GROUP") = "ACTIONS" , Named("EXPORT") = "ACTIONS"   ),
                                       Named("FILTERS") = TAG_FILTERS,
                                       Named("COLUMNS") =  List::create( Named("TRANSPORTS") = "ACTIONS",Named("OTHER_COLUMNS") = "ACTIONS"),
                                       Named("TITLE") = List::create( Named("CHECK") = "CHECK",Named("OTHERS") = "OTHERS") );

List TAG_DISPLAY_HEADER = List::create( Named( "BUTTONS") = "" );
List TAG_DISPLAY_TRANSPORTS = List::create( Named( "BUTTONS") = "" );
List TAG_DISPLAY_RELATIONS = List::create( Named( "BUTTONS") = "" );


List TAG_DISPLAY_VIEW =  List::create( Named( "BUTTONS") =
                                             List::create(Named("CLOSE") = "ACTIONS" ,
                                                          Named("HISTORY") = "ACTIONS" ,
                                                          Named("FULL_SCREEN") = "ACTIONS"   ) ,
                                      Named( "SECTIONS") =  List::create( Named("HEADER") = TAG_DISPLAY_HEADER ,
                                                                          Named("TRANSPORTS") = TAG_DISPLAY_TRANSPORTS ,
                                                                          Named("RELATIONS") = TAG_DISPLAY_RELATIONS   )     );

List TAG_DISPLAY_EDIT =  List::create( Named( "BUTTONS") =
                                             List::create(Named("CLOSE") = "ACTIONS" ,
                                                          Named("HISTORY") = "ACTIONS" ,
                                                          Named("FULL_SCREEN") = "ACTIONS"   ) );

List TAG_FEATURE_DETAILS = List::create( Named("ALL") = "ALL" ,Named("DISPLAY") = TAG_DISPLAY_VIEW, Named("EDIT") = TAG_DISPLAY_EDIT );


List TAG_MAPS_HIERARCHY  = List::create(
                                Named("ALL") = "ALL",
                                Named("LIST") = TAG_FEATURE_LIST,
                                Named("DETAILS") = TAG_FEATURE_DETAILS,
                                Named("BACKEND") = List::create( Named("ALL") = "ALL", Named("INITIALIZE") = "", Named("UPDATE") = "", Named("CREATE") = "" , Named("MARK_TEST_CASE") = "" ),
                                Named("BROWSER") = List::create( Named("ALL") = "ALL", Named("URL") = "", Named("NAVIGATION") = "" )

);




//map<string, map<string, map<string, map<string, string>>>> TAGS_HIERARCHY {
//    { "TAGS_ELEMENT_FEATURE_LIST" ,
//                   {"BUTTON", {{"CREATE",{"ACTIONS",""} },
//                              {"SORT",{"ACTIONS",""} },
//                              {"GROUP",{"ACTIONS",""} },
//                              {"EXPORT",{"ACTIONS",""} },
//                              {"ANALYTICS",{"ACTIONS",""} } }}
////                   {"FILTER", {"SEARCH_INPUT", {"ACTIONS",""} },
////                              {"COMBO_BOX", {"PROJECT","ACTIONS"} ,
////                                            {"SCOPE","ACTIONS"} ,
////                                            {"STATUS","ACTIONS"} ,
////                                            {"PRIORITY","ACTIONS"} ,
////                                            {"WORKSTREAM","ACTIONS"},
////                                            {"TRANSPORTS","ACTIONS"}},
////                              {"FILTER_INDICATOR", {"ACTIONS",""} }},
////                   {"COLUMNS",{"ACTIONS",{"ACTIONS",""}}},
////                   {"CELLS",{"ACTIONS",{"ACTIONS",""}}},
////                   {"TITLE",{"ACTIONS",{"ACTIONS",""}}}
//               }
//};
