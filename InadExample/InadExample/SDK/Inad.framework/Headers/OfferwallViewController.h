//
//  OfferwallViewController.h
//  Inad
//
//  Created by Hai Pham on 8/2/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AdRequestResult.h"
#import "InAdBUS.h"

@interface OfferwallViewController : UIViewController<InAdBUSDelegate>
{
    NSThread* threadLoadAdRequest;
    __weak IBOutlet UITableView *tbCampaign;
    
    __weak IBOutlet UIActivityIndicatorView *loadingIndicator;
}
- (id) init;

@property (nonatomic, strong) AdRequestResult * adRequestResult;

@end
