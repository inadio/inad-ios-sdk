//
//  SubmitType.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum SubmitType : NSUInteger {
    AD_REQUEST, IMPRESS, CLICK, INSTALL, WATCH
}SubmitType;

extern NSString * const SubmitTypeToString[];


