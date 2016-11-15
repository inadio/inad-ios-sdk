//
//  OfferwallListener.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdError.h"


@protocol OfferwallListener <NSObject>

- (void) onOfferwallInitSuccess;

- (void) onOfferwallInitFail:(AdError*) adError;

- (void) onOfferwallOpened;

- (void) onOfferwallShowFail:(AdError*) adError;

- (bool) onOfferwallAdCredited:(float) credits totalCredits:(float) totalCredits flag:(bool) totalCreditsFlag;

- (void) onGetOfferwallCreditsFail:(AdError*) adError;

- (void) onOfferwallClosed;

@end
