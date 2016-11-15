//
//  MoneAdUnit.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdDisplayType.h"

@interface MoneAdUnit : NSObject

@property (nonatomic) int refreshSeconds;

@property (nonatomic) AdDisplayType adDisplayType;

@property (nonatomic, strong) NSString* convUnit;

@property (nonatomic, strong) NSString* convIcon;


- (id) initWithDictionary:(NSDictionary*) dic;


@end
