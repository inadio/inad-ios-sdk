//
//  AdRequestResult.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MoneAdUnit.h"

@interface AdRequestResult : NSObject

@property (nonatomic, strong) NSMutableArray *ads;
@property (nonatomic, strong) MoneAdUnit* moneAdUnit;

- (id) initWithDictionary:(NSDictionary*) dic;

@end
