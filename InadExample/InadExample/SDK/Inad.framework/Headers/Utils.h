//
//  Utils.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Utils : NSObject

+(NSString *)urlEncodeUsingEncoding:(NSStringEncoding)encoding;
+ (bool) isNetworkAvailable:(UIViewController*) activity;
+ (NSString*) NomalizeJSON:(NSString*) json;
+ (long) getCurrentMilliseconds;
@end
