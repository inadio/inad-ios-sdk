//
//  ViewController.m
//  InadExample
//
//  Created by Hai Pham on 11/12/16.
//  Copyright © 2016 inad. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

@synthesize inadNetwork;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    // Do any additional setup after loading the view, typically from a nib.
    inadNetwork = [InAdNetwork getInstance];
    
    // Set offerwall listener
    [inadNetwork setOfferwallListener:self];
    
    // Postback data to publisher server
    // Publisher need config their callback url at http://inad.io
    NSMutableDictionary *owParams = [[NSMutableDictionary alloc] init];
    [owParams setObject:@"123" forKey:@"userId"];
    
    // Initialize offerwall
    [inadNetwork initOfferwall:self adUnitCode:AdUniqueCode postbackData:owParams testMode:true];
    
}


- (IBAction)showAdsTouchUp:(id)sender {
    if ([inadNetwork isOfferwallAvailable]) {
        [inadNetwork showOfferwall];
    }
}

- (void) viewDidUnload {
    if (inadNetwork != nil)
        [inadNetwork onDestroy:self];
}

//@Override
- (void) viewDidAppear:(BOOL)animated {
    if (inadNetwork != nil)
        [inadNetwork onResume:self];
}

//@Override
- (void) viewDidDisappear:(BOOL)animated {
    if (inadNetwork != nil)
        [inadNetwork onPause:self];
}

// --------------------------------------------------------
// Offerwall callback
- (void) onOfferwallInitSuccess {
    NSLog(@"onOfferwallInitSuccess");
}
- (void) onOfferwallInitFail:(AdError*) adError {
    NSLog(@"onOfferwallInitFailed");
}
- (void) onOfferwallOpened {
    NSLog(@"onOfferwallOpened");
}
- (void) onOfferwallShowFail:(AdError*) adError {
    NSLog(@"onOfferwallShowFailed");
}
- (bool) onOfferwallAdCredited:(float) credits totalCredits:(float) totalCredits flag:(bool) flag {
    NSLog(@"onOfferwallAdCredited: %.2f", credits);
    return false;
}
- (void) onGetOfferwallCreditsFail:(AdError*) adError {
    NSLog(@"onGetOfferwallCreditsFailed");
}
- (void) onOfferwallClosed {
    NSLog(@"onOfferwallClosed");
}
// --------------------------------------------------------





- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
