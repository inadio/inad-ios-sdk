//
//  CampaignTableViewCell.h
//  Inad
//
//  Created by Hai Pham on 8/7/16.
//  Copyright © 2016 vietkite. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Campaign.h"


@interface CampaignTableViewCell : UITableViewCell
{
    __weak IBOutlet UIImageView *imgAppIcon;
    __weak IBOutlet UILabel *lblAppName;
    __weak IBOutlet UILabel *lblAppDescription;
    __weak IBOutlet UILabel *lblRewardPoints;
}

@property (nonatomic, strong) Campaign* campaign;
@property (weak, nonatomic) IBOutlet UIView *viewRewardPoints;


- (void) loadCampaign:(Campaign*) _campaign;

@end
