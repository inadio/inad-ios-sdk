//
//  DatabaseProvider.h
//  MobiManga
//
//  Created by Pham Hoang Hai on 11/7/12.
//  Copyright (c) 2012 Pham Hoang Hai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMResultSet.h"
@interface DatabaseProvider : NSObject

+ (NSString *)getDBPath;
+ (BOOL)executeWithStatement:(NSString *)statement ;
+ (FMResultSet *)queryWithStatement:(NSString *)statement;

@end
