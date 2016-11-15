//
//  OfferwallManager.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OfferwallApi.h"
#import "OfferwallListener.h"
#import "InAdDebug.h"
#import "OfferwallAdapter.h"

@interface OfferwallManager : NSObject

@property (nonatomic, strong) id mAdapter;
@property (nonatomic, strong) id mListenersWrapper;
@property (nonatomic) bool mAtomicShouldPerformInit;
@property (nonatomic) bool mIsOfferwallAvailable;

- (id) init;

- (void) initOfferwall:(UIViewController*) activity adUnitCode:(NSString*) adUnitCode postbackData:(NSDictionary*) postbackData debugMode:(bool)debugMode;

- (void) addOfferwallAdapter:(id) adapter ;

- (bool) hasProviders ;

- (void) reportInitFail:(AdError*) error ;

- (void) reset ;

//@Override
- (void) showOfferwall;

//@Override
- (bool) isOfferwallAvailable ;

//@Override
- (void) getOfferwallCredits;

//@Override
- (void) setOfferwallListener:(id) offerwallListener;

//@Override
- (void) onResume:(UIViewController*) activity ;

//@Override
- (void) onPause:(UIViewController*) activity;

//@Override
- (void) onDestroy:(UIViewController*) activity;

//@Override
- (void) onOfferwallInitSuccess;

//@Override
- (void) onOfferwallInitFail:(AdError*) adError;
//@Override
- (void) onOfferwallOpened;

//@Override
- (void) onOfferwallShowFail:(AdError*) adError;

//@Override
- (bool) onOfferwallAdCredited:(float) credits totalCredits:(float) totalCredits flag:(bool) flag;

//@Override
- (void) onGetOfferwallCreditsFail:(AdError*) adError;

//@Override
- (void) onOfferwallClosed;

@end
