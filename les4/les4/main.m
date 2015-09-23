//
//  main.m
//  les4
//
//  Created by Maemolee on 15/9/6.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
       	int i=0;

       label_a://这个叫标签，用来定位代码。
       {
           i++;
           NSLog(@"i的值为%d", i);
       }
        if(i<5)
            {goto label_a;}//goto句型
        else
            {goto label_b;}
       label_b:
       {
       		NSLog(@"You jumpped too far.");
       }
    }
    return 0;
}
