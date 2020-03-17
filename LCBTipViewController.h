//
//  LCBTipViewController.h
//  Tips
//
//  Created by Thomas Sabino-Benowitz on 3/17/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LCBTipViewController.h"
#import "LCBTip.h"
#import "LCBTipController.h"    // always import .h, never import .m

@interface LCBTipViewController ()
// Private Properties
@property (nonatomic) LCBTipController *tipController;
// Private IBOutlets
// Private Methods
@end
@implementation LCBTipViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    _tipController = [[LCBTipController alloc] init];
    // Test Data (take it out later)
    LCBTip *tip = [[LCBTip alloc] initWithName:@"Coffee and Tea"
                                      subTotal:14.59
                                 tipPercentage:20.0
                                    splitCount:1];
    [self.tipController addTip:tip];
    NSLog(@"self.tipController.count: %ld", self.tipController.tips.count);
}
