//
//  ClientInfo.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModelLib.h"
@interface ClientInfo : JSONModel

@property (nonatomic, strong) NSString* uniqueCode;

@property (nonatomic) long clientProfileId;

@property (nonatomic, strong) NSString* clientRequestUrl;

- (id) initWithDictionary:(NSDictionary*) dic;
- (id) initWithString:(NSString*) string;
- (NSString *) toJSON;

@end
