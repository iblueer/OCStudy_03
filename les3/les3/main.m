//
//  main.m
//  les3
//
//  Created by Maemolee on 15/9/20.
//  Copyright © 2015年 Maemolee. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        int a=1;
        NSLog(@"a的值为%d",a);
        int b=2;
        NSLog(@"b的值为%d",b);
        
        if(a<b){
        	NSLog(@"这句话是真的！");
        }else{
            NSLog(@"这句话是假的！");
        }
        NSLog(@"Hehe");
    }
    return 0;
}
