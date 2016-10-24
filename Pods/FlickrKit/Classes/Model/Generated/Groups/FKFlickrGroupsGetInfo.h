//
//  FKFlickrGroupsGetInfo.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrGroupsGetInfoError) {
	FKFlickrGroupsGetInfoError_GroupNotFound = 1,		 /* The group NSID passed did not refer to a group that the calling user can see - either an invalid group is or a group that can't be seen by the calling user. */
	FKFlickrGroupsGetInfoError_GroupIsPrivate = 2,		 /* This is a private group. */
	FKFlickrGroupsGetInfoError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGroupsGetInfoError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGroupsGetInfoError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrGroupsGetInfoError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGroupsGetInfoError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGroupsGetInfoError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGroupsGetInfoError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGroupsGetInfoError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Get information about a group.


Response:

<group id="34427465497@N01" iconserver="1" iconfarm="1" lang="en-us" ispoolmoderated="0">
	<name>GNEverybody</name>
	<description>The group for GNE players</description>
	<members>69</members>
	<privacy>3</privacy>
	<throttle count="10" mode="month" remaining="3"/>
        <restrictions photos_ok="1" videos_ok="1" images_ok="1" screens_ok="1" art_ok="1" safe_ok="1" moderate_ok="0" restricted_ok="0" has_geo="0" />
</group>

*/
@interface FKFlickrGroupsGetInfo : NSObject <FKFlickrAPIMethod>

/* The NSID of the group to fetch information for. */
@property (nonatomic, copy) NSString *group_id; /* (Required) */

/* The path alias of the group. One of this or the group_id param is required */
@property (nonatomic, copy) NSString *group_path_alias;

/* The language of the group name and description to fetch.  If the language is not found, the primary language of the group will be returned.

Valid values are the same as <a href="/services/feeds/">in feeds</a>. */
@property (nonatomic, copy) NSString *lang;


@end
