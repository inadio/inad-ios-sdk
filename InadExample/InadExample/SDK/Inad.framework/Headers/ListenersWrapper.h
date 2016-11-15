//
//  ListenersWrapper.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OfferwallListener.h"
@interface ListenersWrapper : NSObject

@property (nonatomic, strong) id mOfferwallListener;

- (id) init ;


//@Override
- (void) onOfferwallInitSuccess ;

//@Override
- (void) onOfferwallInitFail:(AdError*) adError ;

//@Override
- (void) onOfferwallOpened ;

//@Override
- (void) onOfferwallShowFail:(AdError*) adError ;

//@Override
- (bool) onOfferwallAdCredited:(float) credits totalCredits:(float) totalCredits flag:(bool) totalCreditsFlag ;

//@Override
- (void) onGetOfferwallCreditsFail:(AdError*) adError;

//@Override
- (void) onOfferwallClosed ;

@end
