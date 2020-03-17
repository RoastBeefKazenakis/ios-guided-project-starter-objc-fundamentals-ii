//
//  LCBTip.m
//  Tips
//
//  Created by Thomas Sabino-Benowitz on 3/17/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import "LCBTip.h"

@implementation LCBTip


- (instancetype)initWithName:(NSString *)name
                    subtotal:(double)subTotal
               tipPercentage:(double)tipPercentage
                  splitCount:(int)splitCount;
self = [super init];
if (self) { // self != nil
    // Init Rule: Always set your instance variables (_name), don't use property syntax, because it can have side effects (self.name)

    
    _name = name;
    _subTotal = subTotal;
    _tipPercentage = tipPercentage;
    _splitCount = splitCount;
}
return self;


//What Information To Store

// Total

// Amt. of People

// Tip Percentage

// Tip Name


@end
