//
//  ViewController.m
//  GlobalVariableInMachO
//
//  Created by Jentle on 2020/5/14.
//  Copyright © 2020 Jentle. All rights reserved.
//

#import "ViewController.h"

int a = 20;
int b = 20;
int c = 30;
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    ///ASLR:偏移0x0000000004fb4000
    ///实际地址：a=0x104fc14b8 b=0x104fc14bc c=0x104fc14c0
    ///未使用ASLR的地址：a=0x104fc14b8-0x0000000004fb4000=0x10000D4B8
    ///
    NSLog(@"%p %p %p",&a,&b,&c);
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    
    NSLog(@"a=%p b=%p c=%p",&a,&b,&c);
    NSLog(@"%s",__func__);
}


@end
