//
//  OfferwallListenerEvent.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdError.h"




#define INIT_SUCCESS 0
#define INIT_FAIL 1
#define OPEN 2
#define SHOW_FAIL 3
#define AD_CREDITED 4
#define CREDITS_FAIL 5
#define CLOSE 6

@interface OfferwallListenerEvent : NSObject

@property (nonatomic) int method;// = TYPE.INIT_SUCCESS;
@property (nonatomic) float installValue;
@property (nonatomic, strong) AdError* adError;

- (id) init:(int) method;

- (id) init:(int) method adError:(AdError*) adError;

- (id) init:(int) method installValue:(float) installValue;

- (int) getMethod;

- (float) getInstallValue;

- (AdError*) getAdError;

@end
