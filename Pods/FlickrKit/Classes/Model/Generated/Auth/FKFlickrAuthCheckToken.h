//
//  FKFlickrAuthCheckToken.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrAuthCheckTokenError) {
	FKFlickrAuthCheckTokenError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrAuthCheckTokenError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrAuthCheckTokenError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrAuthCheckTokenError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrAuthCheckTokenError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrAuthCheckTokenError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrAuthCheckTokenError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrAuthCheckTokenError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrAuthCheckTokenError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Returns the credentials attached to an authentication token. This call <b>must</b> be signed, and is <b><a href="/services/api/auth.oauth.html">deprecated in favour of OAuth</a></b>.

<p><code>perms</code> can have values of <code>none</code>, <code>read</code>, <code>write</code> or <code>delete</code>. For more information, see the <a href="/services/api/auth.spec.html">Auth API spec</a>.</p>

Response:

<auth>
	<token>976598454353455</token>
	<perms>read</perms>
	<user nsid="12037949754@N01" username="Bees" fullname="Cal H" />
</auth>

*/
@interface FKFlickrAuthCheckToken : NSObject <FKFlickrAPIMethod>

/* The authentication token to check. */
@property (nonatomic, copy) NSString *auth_token; /* (Required) */


@end
