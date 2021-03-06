//
//  FKFlickrPeopleGetInfo.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrPeopleGetInfoError) {
	FKFlickrPeopleGetInfoError_UserNotFound = 1,		 /* The user id passed did not match a Flickr user. */
	FKFlickrPeopleGetInfoError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPeopleGetInfoError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPeopleGetInfoError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPeopleGetInfoError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPeopleGetInfoError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPeopleGetInfoError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPeopleGetInfoError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPeopleGetInfoError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Get information about a user.

<p>The <code>firstdate</code> element contains the unix timestamp of the first photo uploaded by the user. The <code>firstdatetaken</code> element contains the mysql datetime of the first photo taken by the user.</p>
<p>The <code>iconserver</code> element is used to build the url to the users' buddyicon - for more information please read the <a href="/services/api/misc.buddyicons.html">buddyicon guide</a>.</p>
<p>
If the API call is authenticated contact information will also be returned as attributes on the person element.  <code>contact</code>, <code>friend</code>, and <code>family</code> are boolean flags describing the relationship between the <a href="/services/api/auth.spec.html">authenticated</a> user, and the person currently being inspected.   <code>revcontact</code>, <code>revfriend</code>, and <code>revfamily</code> is the reciprocal relationship.
</p>

Response:

<person nsid="12037949754@N01" ispro="0" iconserver="122" iconfarm="1">
	<username>bees</username>
	<realname>Cal Henderson</realname>
        <mbox_sha1sum>eea6cd28e3d0003ab51b0058a684d94980b727ac</mbox_sha1sum>
	<location>Vancouver, Canada</location>
	<photosurl>http://www.flickr.com/photos/bees/</photosurl> 
	<profileurl>http://www.flickr.com/people/bees/</profileurl> 
	<photos>
		<firstdate>1071510391</firstdate>
		<firstdatetaken>1900-09-02 09:11:24</firstdatetaken>
		<count>449</count>
	</photos>
</person>

*/
@interface FKFlickrPeopleGetInfo : NSObject <FKFlickrAPIMethod>

/* The NSID of the user to fetch information about. */
@property (nonatomic, copy) NSString *user_id; /* (Required) */


@end
