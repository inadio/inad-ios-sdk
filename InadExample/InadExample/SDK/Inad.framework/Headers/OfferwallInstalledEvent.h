//
//  OfferwallInstalledEvent.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OfferwallApp.h"

@interface OfferwallInstalledEvent : NSObject

@property (nonatomic, strong) OfferwallApp* offerwallApp;

- (id) init:(OfferwallApp*) offerwallApp;

- (OfferwallApp*) getOfferwallApp ;

@end
