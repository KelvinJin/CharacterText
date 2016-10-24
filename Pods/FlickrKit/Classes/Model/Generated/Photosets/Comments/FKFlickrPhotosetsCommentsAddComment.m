//
//  FKFlickrPhotosetsCommentsAddComment.m
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrPhotosetsCommentsAddComment.h" 

@implementation FKFlickrPhotosetsCommentsAddComment



- (BOOL) needsLogin {
    return YES;
}

- (BOOL) needsSigning {
    return YES;
}

- (FKPermission) requiredPerms {
    return 1;
}

- (NSString *) name {
    return @"flickr.photosets.comments.addComment";
}

- (BOOL) isValid:(NSError **)error {
    BOOL valid = YES;
	NSMutableString *errorDescription = [[NSMutableString alloc] initWithString:@"You are missing required params: "];
	if(!self.photoset_id) {
		valid = NO;
		[errorDescription appendString:@"'photoset_id', "];
	}
	if(!self.comment_text) {
		valid = NO;
		[errorDescription appendString:@"'comment_text', "];
	}

	if(error != NULL) {
		if(!valid) {	
			NSDictionary *userInfo = @{NSLocalizedDescriptionKey: errorDescription};
			*error = [NSError errorWithDomain:FKFlickrKitErrorDomain code:FKErrorInvalidArgs userInfo:userInfo];
		}
	}
    return valid;
}

- (NSDictionary *) args {
    NSMutableDictionary *args = [NSMutableDictionary dictionary];
	if(self.photoset_id) {
		[args setValue:self.photoset_id forKey:@"photoset_id"];
	}
	if(self.comment_text) {
		[args setValue:self.comment_text forKey:@"comment_text"];
	}

    return [args copy];
}

- (NSString *) descriptionForError:(NSInteger)error {
    switch(error) {
		case FKFlickrPhotosetsCommentsAddCommentError_PhotosetNotFound:
			return @"Photoset not found";
		case FKFlickrPhotosetsCommentsAddCommentError_BlankComment:
			return @"Blank comment";
		case FKFlickrPhotosetsCommentsAddCommentError_UserIsPostingCommentsTooFast:
			return @"User is posting comments too fast.";
		case FKFlickrPhotosetsCommentsAddCommentError_SSLIsRequired:
			return @"SSL is required";
		case FKFlickrPhotosetsCommentsAddCommentError_InvalidSignature:
			return @"Invalid signature";
		case FKFlickrPhotosetsCommentsAddCommentError_MissingSignature:
			return @"Missing signature";
		case FKFlickrPhotosetsCommentsAddCommentError_LoginFailedOrInvalidAuthToken:
			return @"Login failed / Invalid auth token";
		case FKFlickrPhotosetsCommentsAddCommentError_UserNotLoggedInOrInsufficientPermissions:
			return @"User not logged in / Insufficient permissions";
		case FKFlickrPhotosetsCommentsAddCommentError_InvalidAPIKey:
			return @"Invalid API Key";
		case FKFlickrPhotosetsCommentsAddCommentError_ServiceCurrentlyUnavailable:
			return @"Service currently unavailable";
		case FKFlickrPhotosetsCommentsAddCommentError_WriteOperationFailed:
			return @"Write operation failed";
		case FKFlickrPhotosetsCommentsAddCommentError_FormatXXXNotFound:
			return @"Format \"xxx\" not found";
		case FKFlickrPhotosetsCommentsAddCommentError_MethodXXXNotFound:
			return @"Method \"xxx\" not found";
		case FKFlickrPhotosetsCommentsAddCommentError_InvalidSOAPEnvelope:
			return @"Invalid SOAP envelope";
		case FKFlickrPhotosetsCommentsAddCommentError_InvalidXMLRPCMethodCall:
			return @"Invalid XML-RPC Method Call";
		case FKFlickrPhotosetsCommentsAddCommentError_BadURLFound:
			return @"Bad URL found";
  
		default:
			return @"Unknown error code";
    }
}

@end
