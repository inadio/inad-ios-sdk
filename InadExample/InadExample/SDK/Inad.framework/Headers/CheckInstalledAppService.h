//
//  CheckInstalledAppService.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum InstalledAppServiceState : NSUInteger {
    STATE_NULL, STATE_INIT, STATE_START, STATE_STOP
}InstalledAppServiceState;

@interface CheckInstalledAppService : NSObject
{
}

@property (nonatomic) InstalledAppServiceState CheckInstalledAppServiceState;
@property (nonatomic, strong) NSThread* threadCheckAppInstall;
@property (nonatomic, strong) NSMutableArray* listApp;
@property (nonatomic) long lastTimeRetrieveListInstalledApp;
+ (CheckInstalledAppService*) getInstance;
- (void) startThreadCheckInstalledApp;
- (void) stopThreadCheckInstalledApp;
- (BOOL) isAppInstalled:(NSString*) bundleID;
- (void) openUrl:(NSString*) url ;
- (void) openAppOnPlayStore:(NSString*) packageName ;
- (void) searchAppOnPlayStore:(NSString*) keywords;

@end
