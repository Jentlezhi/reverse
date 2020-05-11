//
//  CityCell.h
//  TestDemo
//
//  Created by Jentle on 2020/5/3.
//  Copyright © 2020 Jentle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "../Model/CityModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface CityCell : UITableViewCell

/// model
@property(strong, nonatomic) CityModel *model;

+ (instancetype)cellForTableView:(UITableView *)tableView
                       indexPath:(NSIndexPath *)indexPath;

@end

NS_ASSUME_NONNULL_END
