//
//  BaseAPI.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface BaseAPI : NSObject

- (void) onResume:(UIViewController*) viewController;
- (void) onPause:(UIViewController*) viewController;
- (void) onDestroy:(UIViewController*) viewController;

@end
