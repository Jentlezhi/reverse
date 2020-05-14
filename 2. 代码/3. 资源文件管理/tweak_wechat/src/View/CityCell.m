//
//  CityCell.m
//  TestDemo
//
//  Created by Jentle on 2020/5/3.
//  Copyright © 2020 Jentle. All rights reserved.
//

#import "CityCell.h"

@implementation CityCell

- (void)awakeFromNib {
    [super awakeFromNib];
}

- (instancetype)initWithFrame:(CGRect)frame {
    
    if (self = [super initWithFrame:frame]) {
        
    }
    return self;;
}

///复用:已注册cell
+ (instancetype)cellForTableView:(UITableView *)tableView
                       indexPath:(NSIndexPath *)indexPath {
    NSString *identifier = NSStringFromClass([self class]);
    CityCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (!cell){
        cell = [[self alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:identifier];
    }
    return cell;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];
}

- (void)setModel:(CityModel *)model {
    
    _model = model;
    self.textLabel.text = model.title;
}

@end
