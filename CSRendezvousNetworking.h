//
//  Globals.h
//  Rendezvous
//
//  Created by Christopher Su on 5/10/14.
//  Copyright (c) 2014 Christopher Su. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSRendezvousNetworking : NSObject

typedef NS_ENUM(NSInteger, NetworkRequestType) {
    GET,
    POST,
    PUT,
    DELETE
};

+ (NSDictionary *)expectUserArgumentRequest:(NSString *)argument type:(NetworkRequestType)type path:(NSString *)path;
+ (NSDictionary *)expectUserParameterRequest:(NSDictionary *)parameters type:(NetworkRequestType)type path:(NSString *)path;
+ (NSDictionary *)expectUserRequest:(NSDictionary *)parameters argument:(NSString *)argument type:(NetworkRequestType)type path:(NSString *)path;

@end
