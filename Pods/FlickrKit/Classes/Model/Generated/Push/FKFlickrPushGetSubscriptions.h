//
//  FKFlickrPushGetSubscriptions.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrPushGetSubscriptionsError) {
	FKFlickrPushGetSubscriptionsError_ServiceCurrentlyAvailableOnlyToProAccounts = 5,		 /* PuSH subscriptions are currently restricted to Pro account holders. */
	FKFlickrPushGetSubscriptionsError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPushGetSubscriptionsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPushGetSubscriptionsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPushGetSubscriptionsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPushGetSubscriptionsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPushGetSubscriptionsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPushGetSubscriptionsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPushGetSubscriptionsError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPushGetSubscriptionsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPushGetSubscriptionsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPushGetSubscriptionsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPushGetSubscriptionsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPushGetSubscriptionsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Returns a list of the subscriptions for the logged-in user.
<br><br>
<i>(this method is experimental and may change)</i>


Response:

<rsp stat="ok">
  <subscriptions>
    <subscription topic="contacts_photos" callback="http://example.com/contacts_photos_endpoint?user=12345" pending="0" date_create="1309293755" lease_seconds="0" expiry="1309380155" verify_attempts="0" />
    <subscription topic="contacts_faves" callback="http://example.com/contacts_faves_endpoint?user=12345" pending="0" date_create="1309293785" lease_seconds="0" expiry="1309380185" verify_attempts="0" />
  </subscriptions>
</rsp>

*/
@interface FKFlickrPushGetSubscriptions : NSObject <FKFlickrAPIMethod>


@end
