//
//  InAdPreference.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>

#define CLIENT_ID @"client_id" //id of device
#define OFFERWALL @"offerwall"
#define FULLSCREEN @"fullscreen"
#define VIDEOREWARD @"videoreward"
#define BANNER @"banner"
#define AD_UNIT_CODE @"ad_unit_code"
#define UNIQUE_CODE @"unique_code"
#define CLIENT_PROFILEID @"client_profileid"
#define CLIENT_REQUESTURL @"client_requesturl"
#define CUSTOM_ID @"custom_id" //id of user

@interface InAdPreference : NSObject
{
}

+ (InAdPreference*) getInstance;
- (void) remove:(NSString*) key ;
- (void) removeRK:(NSString*) key ;
- (BOOL) hasKey:(NSString*) key ;
- (InAdPreference*) setClientID:(NSString*) clientID ;
- (InAdPreference*) setString:(NSString*) key value:(NSString*) value ;
- (InAdPreference*) setInt:(NSString*) key value:(int) value ;
- (InAdPreference*) setLong:(NSString*) key value:(long) value ;
- (InAdPreference*) setFloat:(NSString*) key value:(float) value ;
- (InAdPreference*) setBoolean:(NSString*) key value:(bool) value;
- (InAdPreference*) setByteArray:(NSString*) key value:(int) value ;
- (int) getInt:(NSString*) key;
- (int) getInt:(NSString*) key value:(int) defValue;
- (float) getFloat:(NSString*) key ;
- (NSString*) getString:(NSString*) key ;
- (long) getLong:(NSString*) key ;
- (bool) getBoolean:(NSString*) key value:(bool) def;

@end
