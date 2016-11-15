//
//  InAdCache.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ClientInfo.h"
#import "AdRequestResult.h"

@interface InAdCache : NSObject
{
}

@property (nonatomic, strong) NSString* offerwallAdUnitCode;
@property (nonatomic, strong) ClientInfo* offerwallClientInfo;
@property (nonatomic, strong) AdRequestResult* offerwallAdRequestResult;
@property (nonatomic, strong) NSString* offerwallCallBackMethod;
@property (nonatomic) bool offerwallDebugMode;
@property (nonatomic) int versionCode;
@property (nonatomic, strong) NSString* versionName;


+ (InAdCache*) getInstance ;
- (id) init;
- (void) initData;
- (ClientInfo*) readClientInfo:(NSString*) prefix;
- (NSString*) getVenderUUID;
- (NSString*) getiOSVersion;
- (NSString*) getPhoneInfo;

@end
