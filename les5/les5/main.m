//
//  main.m
//  les5
//
//  Created by Maemolee on 15/9/6.
//  Copyright (c) 2015年 Maemolee. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        int i = 0;
        while (i<5) {
            i++;
            NSLog(@"Hello world");
            NSLog(@"i no value ha %d", i);
        }
    }
    return 0;
}
