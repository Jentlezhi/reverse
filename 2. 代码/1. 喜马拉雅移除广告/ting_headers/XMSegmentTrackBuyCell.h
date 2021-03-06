//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, XMCacheItem;
@protocol XMSegmentTrackBuyDelegate;

@interface XMSegmentTrackBuyCell : UITableViewCell
{
    UILabel *_titleLab;
    UIButton *_selectBtn;
    UIView *_line;
    XMCacheItem *_cacheItem;
    id <XMSegmentTrackBuyDelegate> _delegate;
}

+ (double)heightForCache:(id)arg1;
@property(nonatomic) __weak id <XMSegmentTrackBuyDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMCacheItem *cacheItem; // @synthesize cacheItem=_cacheItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onSelect:(id)arg1;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

