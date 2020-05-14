//
//  CityListViewController.m
//  TestDemo
//
//  Created by Jentle on 2020/5/3.
//  Copyright © 2020 Jentle. All rights reserved.
//

#import "CityListViewController.h"
#import "../Model/CityModel.h"
#import "../View/CityCell.h"

#define ZJFile1(path) @"/Library/PreferenceLoader/Preferences/jentle_wechat/" #path

@interface CityListViewController ()<UITableViewDataSource,UITableViewDelegate>

/// CityListTableView
@property(strong, nonatomic) UITableView *cityListTableView;
/// list
@property(strong, nonatomic) NSArray <CityModel *>*list;

@end

@implementation CityListViewController

- (UITableView *)cityListTableView {
    
    if (!_cityListTableView) {
        _cityListTableView = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStyleGrouped];
        _cityListTableView.dataSource = self;
        _cityListTableView.delegate = self;

    }
    return _cityListTableView;;
}

- (NSArray<CityModel *> *)list {
    
    if (!_list) {
        NSMutableArray *temp = @[].mutableCopy;
        // NSString *path = [[NSBundle mainBundle] pathForResource:@"data.json" ofType:nil];
        NSData *data = [[NSData alloc] initWithContentsOfFile:ZJFile1(data.json)];
        NSArray *dictArray = [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:nil];
        for (NSDictionary *dict in dictArray) {
            CityModel *model = CityModel.new;
            model.title = dict[@"title"];
            model.subTitle = dict[@"subTitle"];
            [temp addObject:model];
        }
        _list = temp.copy;
    }
    return _list;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view addSubview:self.cityListTableView];
    
    NSLog(@"%@",self.list);
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    
    return self.list.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    CityCell *cell = [CityCell cellForTableView:tableView indexPath:indexPath];
    CityModel *model = [self.list objectAtIndex:indexPath.row];
    cell.model = model;
    return cell;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    
    CityModel *model = [self.list objectAtIndex:indexPath.row];
    NSString *msg = [NSString stringWithFormat:@"该省市的代表城市为：%@",model.subTitle];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"提示" message:msg preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"我知道了" style:UIAlertActionStyleDefault handler:nil];
    [alert addAction:okAction];
    [self presentViewController:alert animated:true completion:nil];
}





@end
