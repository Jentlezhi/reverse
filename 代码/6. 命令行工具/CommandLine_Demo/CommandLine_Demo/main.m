//
//  main.m
//  CommandLine_Demo
//
//  Created by Jentle on 2020/5/6.
//  Copyright © 2020 Jentle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <mach-o/fat.h>
#import <mach-o/loader.h>

//argc： 参数个数
//argv： 存放参数的数组
//argv[0]：可执行文件的路径
int main(int argc, char * argv[]) {
    
    if (argc == 1) {
        NSLog(@"-l 查看Mach-o信息");
        return 0;
    }
    if (strcmp(argv[1], "-l") != 0) {
        NSLog(@"-l 查看Mach-o信息");
        return 0;
    }
    
    NSLog(@"参数1：%s",argv[0]);
    NSLog(@"参数2：%s",argv[1]);
    NSString *appPath = @"/private/var/containers/Bundle/Application/25490182-6B9E-4817-BAB0-82EFE55BE0E1/pinduoduo.app/pinduoduo";
    NSFileHandle *handle = [NSFileHandle fileHandleForReadingAtPath:appPath];
    NSUInteger length = sizeof(uint32_t);
    NSData *magicData = [handle readDataOfLength:length];
    uint32_t  magicNumber;
    [magicData getBytes:&magicNumber length:length];
    //大小端
    if (magicNumber == FAT_MAGIC || magicNumber == FAT_CIGAM) {
        NSLog(@"FAT文件");
    }else if(magicNumber == MH_MAGIC || magicNumber == MH_CIGAM){
        NSLog(@"非64架构文件");
    }else if(magicNumber == MH_MAGIC_64 || magicNumber == MH_CIGAM_64){
        NSLog(@"64架构文件");
    }else{
        NSLog(@"读取失败");
    }
    return 0;
}
