//
//  FKFlickrPhotosRemoveTag.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrPhotosRemoveTagError) {
	FKFlickrPhotosRemoveTagError_TagNotFound = 1,		 /* The calling user doesn't have permission to delete the specified tag. This could mean it belongs to someone else, or doesn't exist. */
	FKFlickrPhotosRemoveTagError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosRemoveTagError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosRemoveTagError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosRemoveTagError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosRemoveTagError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosRemoveTagError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosRemoveTagError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosRemoveTagError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosRemoveTagError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosRemoveTagError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosRemoveTagError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosRemoveTagError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosRemoveTagError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Remove a tag from a photo.




*/
@interface FKFlickrPhotosRemoveTag : NSObject <FKFlickrAPIMethod>

/* The tag to remove from the photo. This parameter should contain a tag id, as returned by <a href="/services/api/flickr.photos.getInfo.html">flickr.photos.getInfo</a>. */
@property (nonatomic, copy) NSString *tag_id; /* (Required) */


@end
