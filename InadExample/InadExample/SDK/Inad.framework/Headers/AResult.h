//
//  AResult.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum ErrorCode : NSUInteger {
    OK,
    CLIENT_NOT_FOUND,
    INVALID
} ErrorCode;


@interface AResult : NSObject



@property (nonatomic) NSString* errorCode;

- (id) initWithDictionary:(NSDictionary*) dic;

@end
