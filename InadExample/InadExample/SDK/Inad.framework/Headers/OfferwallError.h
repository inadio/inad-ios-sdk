//
//  OfferwallError.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdError.h"

@interface OfferwallError : AdError

@property (nonatomic, strong) AdError* INIT_ADUNITCODE_EMPTY;

+ (OfferwallError*) getInstance;
- (id) init:(int) errorCode errorMessage:(NSString*) errorMessage;

@end
