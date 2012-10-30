//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Steve Ma on 12-08-18.
//  Copyright (c) 2012 Steve Ma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
