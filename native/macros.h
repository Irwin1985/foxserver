&& -------------------------------------------------------- &&
&& <(_screen.oHelper.oLanguage.Translate("_6QE11M0DS"))>
&& -------------------------------------------------------- &&
#define QUERY				        TEXT TO this.oHelper.cQuery NOSHOW PRETEXT 15 TEXTMERGE
#define ENDQUERY			      ENDTEXT
#define HELPER				      this.oHelper
#define	WRITELOG			      this.oHelper.Log
#define REQUEST				      this.oRequest
#define ROUTE				        this.oFoxServer.addRoute
#define CONTROLLER		      this.oFoxServer.addController
#define BODY				        this.oJson
#define _TRY				        try
#define _CATCH				      catch to loEx
#define _ENDTRY				      endtry
#define _FINALLY			      finally
#define STATUS_CODE		      this.oResponse.SetStatusCode
#define CONTENT_TYPE	      this.oResponse.SetContentType
#define CONTENT				      this.oResponse.SetContent
#define GET_HEADER		      this.oRequest.GetHeader
#define HTML_ENCODE		      HELPER.EscapeCharsToJSON
#define _ERRORMSG			      HTML_ENCODE(HELPER.GetExceptionMessage(loEx))
#define _ERRORSQL			      HTML_ENCODE(HELPER.GetSQLError())
#define GET_METHOD		      this.oRequest.GetMethod
#Define GET_BODY			      This.oRequest.GetBody
#define SET_STRCON		      HELPER.SetConnectionString
#define CONNECT				      HELPER.openConnection
#define DISCONNECT		      HELPER.closeConnection
#define OBJ_QUERY			      HELPER.executeQuery
#define EXEC_QUERY		      HELPER.executeNonQuery
#define JSON_QUERY			    HELPER.queryToJSON
#define GET_JSON_RESPONSE 	HELPER.getJsonResponse
#define URL_PARAM			      this.oRequest.GetURLParam
#Define SET_LOCATION		    This.oResponse.SetLocation
#Define HEADER_EXISTS		    This.oRequest.HeaderExists
#Define HEADER_GET			    This.oRequest.HeaderGet
#Define QPARAM_EXISTS		    This.oRequest.QueryParamExists
#Define QPARAM_GET			    This.oRequest.QueryParamGet
#Define MULTIPART_EXISTS	  This.oRequest.MultiPartExists
#Define MULTIPART_GET		    This.oRequest.MultiPartGet
#Define DTOUNX				      HELPER.DateToUnix
#Define UNXTOD				      HELPER.UnixToDate
#Define NEW_JWT				      HELPER.CreateJwt
#Define GET_JWT				      HELPER.ParseJwt
#Define MIME_FILE			      this.oResponse.SetFileName
#Define MIME_ENCODE			    HELPER.EncodeMIMEFile
#Define PARSE_HTML			    HELPER.ParseHTML