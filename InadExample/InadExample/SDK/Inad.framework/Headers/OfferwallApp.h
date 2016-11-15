//
//  OfferwallApp.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Campaign.h"
#import "ClientInfo.h"

@interface OfferwallApp : NSObject

@property (nonatomic, strong) NSString* packageName;
@property (nonatomic, strong) ClientInfo* clientInfo;
@property (nonatomic, strong) Campaign* campaign;



@end
