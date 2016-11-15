//
//  OfferwallAdapter.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OfferwallListener.h"
#import "InAdBUS.h"
#import "OfferwallViewController.h"

@interface OfferwallAdapter : NSObject <InAdBUSDelegate>
{
    
    //private Subscription subscription;
}

@property (nonatomic, strong) OfferwallViewController *offerwallViewController;
@property (nonatomic, strong) UIViewController* activity;
@property (nonatomic, strong) id offerwallListener;

- (id) init:(UIViewController*) activity ;

- (void) subscribe;


- (void) unsubscribe ;

//@Override
- (void) showOfferwall;

//@Override
- (bool) isOfferwallAvailable;

//@Override
- (void) getOfferwallCredits ;

//@Override
- (void) setOfferwallListener:(id) iOfferwallListener ;

//    public void initOfferwall(Activity activity, String adUnitCode, String callBackMethod, boolean debugMode) {

//@Override
- (void) initOfferwall:(UIViewController*) paramActivity adUnitCode:(NSString*) adUnitCode callBackMethod:(NSString*) callBackMethod debugMode:(bool)debugMode;

//@Override
- (void) onResume:(UIViewController*) activity ;

//@Override
- (void) onPause:(UIViewController*) activity ;

//@Override
- (void) onDestroy:(UIViewController*) activity ;

@end
