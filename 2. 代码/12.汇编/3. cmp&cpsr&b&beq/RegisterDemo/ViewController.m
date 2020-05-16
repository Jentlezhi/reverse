//
//  ViewController.m
//  RegisterDemo
//
//  Created by Jentle on 2020/5/16.
//  Copyright © 2020 Jentle. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    NSLog(@"s");
    NSMutableArray *list = @[@{@"name":@"13-call和"},@{@"name":@"14-函数"},@{@"name":@"143-ARM64"},@{@"name":@"145-ARM64汇编"},@{@"name":@"15-栈平衡"},].mutableCopy;
    
    NSSortDescriptor *distanceDescriptor = [[NSSortDescriptor alloc] initWithKey:@"name"
    ascending:YES];
        NSArray *descriptors = [NSArray arrayWithObjects:distanceDescriptor,nil];
        [list sortUsingDescriptors:descriptors];
    for (NSDictionary *item in list) {
        NSLog(@"name:%@",[item valueForKey:@"name"]);
    }
    
}


@end
