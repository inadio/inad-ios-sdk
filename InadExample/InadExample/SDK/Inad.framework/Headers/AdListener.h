//
//  AdListener.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Ad.h"
#import "AdError.h"

@interface AdListener : NSObject

- (void) onError:(Ad*) ad error:(AdError*) error;

- (void) onAdLoaded:(Ad*) ad;

- (void) onAdClicked:(Ad*) ad;

@end
