//
//  AdView.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Ad.h"
#import "AdSize.h"
#import "AdListener.h"


#define TAG @"AdView"

@interface AdView : NSObject

- (id) init:(NSString*) adUniqueCode adSize:(AdSize*) adSize ;

- (void) setAdListener:(AdListener*) adListener;

//@Override
- (void) loadAd ;

//@Override
- (void) destroy ;

@end
