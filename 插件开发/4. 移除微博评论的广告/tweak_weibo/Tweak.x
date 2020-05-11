


@interface WBTrendCommentCell: UITableViewCell

@property(nonatomic) bool clipsToBounds;

@end

@interface WBFwdCmtLikeCell: UITableViewCell

@end

%hook WBTrendCommentCell

- (void)setupCellData:(id)arg1 {

    [arg1 setValue:@(0.01) forKey:@"_cellHeight"];
    %orig(arg1);
    self.clipsToBounds = YES;
    //获取下一个数据源

}

%end