//
//  People.m
//  test1005
//
//  Created by Maemolee on 10/5/15.
//  Copyright © 2015 Maemolee. All rights reserved.
//

#import "People.h"

@implementation People
{
    int _peopleAge;
    int _peopleSex;
}


- (instancetype)init
{
    self = [super init];
    if (self){
        //类内调用成员变量而不是属性，属性是给类外使用的
        _peopleName = @"张三";
        
    }
    return self;
}

@end
