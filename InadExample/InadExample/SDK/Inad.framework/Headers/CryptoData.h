//
//  CryptoData.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CryptoData : NSObject




@property (nonatomic, strong) NSString* DATA;
@property (nonatomic, strong) NSString* SECRET_KEY;
@property (nonatomic, strong) NSString* PRE_KEY;

@property (nonatomic, strong) NSString* DECODE_CONTENT_SECRET_KEY;
@property (nonatomic) Byte PUBLIC_KEY;

//private static IvParameterSpec iv = new IvParameterSpec(new byte[]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0});

+ (CryptoData*) getInstance;

- (void) loadCryptoData ;
- (void) decrypt;
- (void) loadPublicKey ;
- (bool) verifyContent:(NSString*) responseContent checkSumValue:(NSString*) checkSumValue;
- (NSString*) decryptContent:(NSString*) data;
- (NSString*) encryptContent:(NSString*) data;


@end
