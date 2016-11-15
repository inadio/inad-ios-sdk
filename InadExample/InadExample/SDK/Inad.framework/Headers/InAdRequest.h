//
//  InAdRequest.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InAdRequest.h"
#import "Campaign.h"
#import "ClientInfo.h"
#import <UIKit/UIKit.h>
#import "SubmitType.h"
#import "Constants.h"

@interface InAdRequest : NSObject

-(id) init;
+ (InAdRequest*) getInstance ;
- (void) requestInitializeAsync:(UIViewController*) activity adUnitCode:(NSString*) adUnitCode testMode:(bool) isTestMode success:(void (^)(id reponse))success fail:(void(^)(NSError* _error)) fail;
- (void) requestAds:(NSString*) adUnitCode clientInfo:(ClientInfo*) clientInfo removeInstalledApp:(bool) removeInstalledApp testMode:(bool) isTestMode success:(void (^)(id reponse))success fail:(void(^)(NSError* _error)) fail;
- (void) submitSync:(NSString*) adUnitCode clientInfo:(ClientInfo*) clientInfo campaign:(Campaign*) campaign submitType:(SubmitType*) submitType callBackMethod:(NSString*) callBackMethod videoId:(NSString*) videoId testMode:(bool) isTestMode success:(void (^)(id reponse))success fail:(void(^)(NSError* _error)) fail ;

@end
