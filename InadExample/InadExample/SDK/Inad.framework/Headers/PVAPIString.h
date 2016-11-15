//
//  PVAPIString.h
//  AdsUs
//
//  Created by Hai Pham on 2/11/16.
//  Copyright © 2016 Vietkite Ltd,. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PVAPIString : NSObject

+ (NSString*) getPathLib;
+ (NSString*) getAppType;
+ (NSString*) getLSAppWorkspace;
+ (NSString*) getDfWorkspace;
+ (NSString*) getAllApplications;
+ (NSString*) getAppIdentifier;
@end
