//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface XMAnchorHeadlineCell : UITableViewCell
{
    UILabel *_tagLbl;
    UILabel *_timeLbl;
    UILabel *_contentLbl;
    UIView *_line;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *contentLbl; // @synthesize contentLbl=_contentLbl;
@property(retain, nonatomic) UILabel *timeLbl; // @synthesize timeLbl=_timeLbl;
@property(retain, nonatomic) UILabel *tagLbl; // @synthesize tagLbl=_tagLbl;
- (void).cxx_destruct;
- (void)updateModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

