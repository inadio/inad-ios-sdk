//
//  VKAdnetwork.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OfferwallManager.h"
#import "ListenersWrapper.h"
#import "InAdPreference.h"
#import "InAdCache.h"
#import "SigHelper.h"
#import "OfferwallListener.h"
#import "AppTokenCache.h"


@interface InAdNetwork : NSObject
{
    OfferwallManager* mOfferwallManger;
    ListenersWrapper* mListenersWrapper;
}

+ (InAdNetwork*) getInstance;
- (id) initialize;
- (void) initOfferwall:(UIViewController*) activity adUnitCode:(NSString*) adUnitCode postbackData:(NSDictionary*) postbackData testMode:(bool) isTestMode;
- (void) setOfferwallListener:(id) offerwallListener;
- (void) removeOfferwallListener;
- (void) showOfferwall;
- (bool) isOfferwallAvailable;
- (void) onResume:(UIViewController*) activity ;
- (void) onPause:(UIViewController*) activity ;
- (void) onDestroy:(UIViewController*) activity ;


@end
