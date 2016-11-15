//
//  OfferwallAPI.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OfferwallListener.h"
#import <UIKit/UIKit.h>

@protocol OfferwallApi <NSObject>

- (void) showOfferwall;
- (bool) isOfferwallAvailable;
- (void) getOfferwallCredits;
- (void) setOfferwallListener:(id) iOfferwallListener;
- (void) initOfferwall:(UIViewController*) viewController adUnitCode:(NSString*) adUnitCode callBackMethod:(NSString*) callBackMethod debugMode:(bool)debugMode;

@end
