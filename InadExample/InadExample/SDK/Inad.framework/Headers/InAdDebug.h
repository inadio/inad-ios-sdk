//
//  InAdDebug.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>

#define TAG @"VKANW"
#define TAG_OFFERWALL @"VKANW_OFW"
#define TAG_BANNER @"VKANW_BAN"
#define TAG_INIERSTITIAL @"VKANW_INS"
#define TAG_REWARDEDVIDEO @"VKANW_REV"

@interface InAdDebug : NSObject

+ (void) logError:(NSString*) tag error:(NSString*) error;
+ (void) logError:(NSString*) error;
+ (void) logInfo:(NSString*) tag info:(NSString*) info ;
+ (void) logInfo:(NSString*) info ;
+ (void) logVerbose:(NSString*) tag verbose:(NSString*) verbose ;
+ (void) logVerbose:(NSString*) verbose ;
+ (void) logDebug:(NSString*) tag debug:(NSString*) debug ;
+ (void) logDebug:(NSString*) debug ;
+ (void) logAssert:(NSString*) tag msg:(NSString*) msg;
+ (void) logAssert:(NSString*) msg ;
+ (void) logWarning:(NSString*) tag msg:(NSString*) msg ;
+ (void) logWarning:(NSString*) msg ;

@end
