//
//  LCBTipController.h
//  Tips
//
//  Created by Thomas Sabino-Benowitz on 3/17/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

// class forward declaration
@class LCBTip;

NS_ASSUME_NONNULL_BEGIN

@interface LCBTipController : NSObject

@property NSArray<LCBTip *> *tips;

// Property attributes
// readonly, readwrite
// atomic*, nonatomic

// use default ini t from NSObject(don't need to redeclare it)
//- (instancetype)init;

- (void)addTip:(LCBTip *)tip;

@end

NS_ASSUME_NONNULL_END
