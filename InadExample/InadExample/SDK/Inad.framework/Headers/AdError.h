//
//  AdError.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>


#define NETWORK_ERROR_CODE 1000
#define NO_FILL_ERROR_CODE 1001
#define LOAD_TOO_FREQUENTLY_ERROR_CODE 1002
#define PARSE_JSON_ERROR_CODE 1003
#define CRYPTO_ERROR_CODE 1004
#define SERVER_ERROR_CODE 2000
#define INTERNAL_ERROR_CODE 2001


@interface AdError : NSObject


@property (nonatomic) int errorCode;
@property (nonatomic, strong) NSString* errorMessage;

@property (nonatomic, strong) AdError* NETWORK_ERROR;
@property (nonatomic, strong) AdError* PARSE_JSON_ERROR;
@property (nonatomic, strong) AdError* CRYPTO_ERROR;
@property (nonatomic, strong) AdError* NO_FILL;
@property (nonatomic, strong) AdError* LOAD_TOO_FREQUENTLY;
@property (nonatomic, strong) AdError* SERVER_ERROR;
@property (nonatomic, strong) AdError* INTERNAL_ERROR;

@property (nonatomic, strong) AdError* INIT_ADUNITCODE_EMPTY;
@property (nonatomic, strong) AdError* INIT_CLIENTINFO_EMPTY;

+ (AdError*) getInstance;

- (id) init:(int) errorCode errorMessage:(NSString*) errorMessage;

- (int) getErrorCode;

- (NSString*) getErrorMessage;


@end
