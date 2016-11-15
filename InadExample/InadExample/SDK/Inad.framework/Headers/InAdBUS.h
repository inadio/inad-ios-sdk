//
//  InAdBUS.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol InAdBUSDelegate <NSObject>
- (void) receiveSubData:(id) data;
@end

@interface InAdBUS : NSObject

@property (nonatomic, strong) NSMutableArray* observers;

+ (InAdBUS*) getInstance;
- (void) subscribe:(id) observer;
- (void) unSubscribe:(id) observer;
- (void) send:(id) data;

@end
