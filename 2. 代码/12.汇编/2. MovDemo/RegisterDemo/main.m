//
//  main.m
//  RegisterDemo
//
//  Created by Jentle on 2020/5/16.
//  Copyright © 2020 Jentle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "arm.h"

//extern int my_arm_test(void);
int main(int argc, char * argv[]) {
    NSString * appDelegateClassName;
    mytest();
    int ret = add(1, 2);
    NSLog(@"ret=%d",ret);
    ret = sub(1, 4);
    NSLog(@"ret=%d",ret);
    @autoreleasepool {
        // Setup code that might create autoreleased objects goes here.
        appDelegateClassName = NSStringFromClass([AppDelegate class]);
    }
    return UIApplicationMain(argc, argv, nil, appDelegateClassName);
}
