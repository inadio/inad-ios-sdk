//
//  Log.h
//  WriteLogTest
//
//  Created by Lj0nKjng on 8/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#define LOG_FILE_NAME @"Log.txt"

@interface IALog : NSObject {
}

+ (NSString *)getLogPath;
+ (NSString *)getTime;
+ (BOOL)isEnable;
+ (void)writeLog:(NSString *)log;

@end
