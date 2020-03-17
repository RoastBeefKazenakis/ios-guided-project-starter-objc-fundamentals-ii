//
//  LCBTip.h
//  Tips
//
//  Created by Thomas Sabino-Benowitz on 3/17/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//class Tip {
//    let tipPercentage: Double // 0-100
//    let splitCount: int
//    let subTotal: Double
//    let name: String
//
//    init(name: String, subTotal: Double, tipPercentage: Double, splitCount: Int)
//
//    ...
//}


// An interface feels like a protocol in swift



@interface LCBTip : NSObject


@property NSString *name;
//properties create three things
//
//1.setter: setname
//-(void)setName:(NSString *)name;
//
//2.getter
//-(NSString *)name;
//
//3.instance variable (_name)
//NSString *_name;
//

@property double subTotal;
@property double tipPercentage;;
@property int splitCount;

// - = instance method
// + = class method

- (instancetype)initWithName:(NSString *)name
                    subtotal:(double)subTotal
               tipPercentage:(double)tipPercentage
                  splitCount:(int)splitCount;

@end

NS_ASSUME_NONNULL_END
