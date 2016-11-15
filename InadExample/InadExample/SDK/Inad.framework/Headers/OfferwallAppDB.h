//
//  OfferwallAppDB.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ClientInfo.h"
#import "Campaign.h"

@interface OfferwallAppDB : NSObject



+ (long) insert:(NSString*) packageName clientInfo:(ClientInfo*) clientInfo campaign:(Campaign*) campaign;

+ (NSArray*) getAll ;

+ (bool) hasInstalledApp ;

+ (bool) delete:(NSString*) packageName ;

+ (bool) clearOverCheckedApp ;


+ (void) checkAndCreateDatabase;

@end
