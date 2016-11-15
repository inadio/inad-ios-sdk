//
//  AppTokenCache.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppTokenCache : NSObject
{
    NSString* AndroidId;
    NSString* IMEI;
}

+ (AppTokenCache*) getInstance;
- (NSString*) getAndroidId;
- (NSString*) getIMEI;

@end
