//
//  VarExpression.h
//  InterpreterPattern
//
//  Created by hairong chen on 16/8/11.
//  Copyright © 2016年 hairong chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Expression.h"

@interface VarExpression : NSObject<Expression>

- (instancetype)initWithKey:(NSString *)key ;

@end
