//
//  Campaign.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModelLib.h"

@interface Campaign : JSONModel

@property (nonatomic, strong) NSString* uniqueCode;

@property (nonatomic, strong) NSString* targetUrl;

@property (nonatomic, strong) NSString* productName;

@property (nonatomic, strong) NSString* productTechnicalId;

@property (nonatomic, strong) NSString* platform;

@property (nonatomic, strong) NSMutableArray* texts;

@property (nonatomic, strong) NSString* keywords;

@property (nonatomic, strong) NSString* logoUrl;

@property (nonatomic, strong) NSString* interstitialUrl;

@property (nonatomic, strong) NSString* videoUrl;

@property (nonatomic) int installValue;

- (id) initWithDictionary:(NSDictionary*) dic;


@end
