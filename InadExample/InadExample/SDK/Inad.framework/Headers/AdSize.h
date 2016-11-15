//
//  AdSize.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AdSize : NSObject

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic, strong) AdSize* BANNER_320_50;
@property (nonatomic, strong) AdSize* INTERSTITIAL;
@property (nonatomic, strong) AdSize* BANNER_HEIGHT_50;
@property (nonatomic, strong) AdSize* BANNER_HEIGHT_90;
@property (nonatomic, strong) AdSize* RECTANGLE_HEIGHT_250;

+ (AdSize*) getInstance;

- (id) init:(int) width height:(int) height ;

- (int) getWidth ;

- (int) getHeight ;


@end
