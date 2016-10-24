//
//  FKFlickrAuthOauthGetAccessToken.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrAuthOauthGetAccessTokenError) {
	FKFlickrAuthOauthGetAccessTokenError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrAuthOauthGetAccessTokenError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrAuthOauthGetAccessTokenError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrAuthOauthGetAccessTokenError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrAuthOauthGetAccessTokenError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrAuthOauthGetAccessTokenError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrAuthOauthGetAccessTokenError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrAuthOauthGetAccessTokenError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrAuthOauthGetAccessTokenError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrAuthOauthGetAccessTokenError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Exchange an auth token from the old Authentication API, to an OAuth access token. Calling this method will delete the auth token used to make the request.


Response:

<auth> 
	<access_token oauth_token="72157607082540144-8d5d7ea7696629bf" oauth_token_secret="f38bf58b2d95bc8b" /> 
</auth> 

*/
@interface FKFlickrAuthOauthGetAccessToken : NSObject <FKFlickrAPIMethod>


@end
