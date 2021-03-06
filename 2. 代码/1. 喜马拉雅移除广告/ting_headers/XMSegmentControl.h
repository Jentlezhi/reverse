//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIFont, UIScrollView;

@interface XMSegmentControl : UIView
{
    _Bool _didLoad;
    unsigned int _animationEvent;
    double _animationDuration1;
    double _animationDuration2;
    double _itemSpace;
    _Bool _autoResizeHeightAfterSetItems;
    _Bool _autoResizeWidthAfterSetItems;
    _Bool _lineHasRoundedCorner;
    _Bool _canClickWhenSelected;
    NSArray *_segmentItems;
    double _itemWidth;
    double _itemSpaceMin;
    double _itemSpaceMax;
    long long _borderType;
    UIColor *_borderColor;
    double _firstItemLeft;
    double _lastItemRight;
    double _titleTop;
    double _titleScaleForSelect;
    UIFont *_titleFont;
    UIFont *_titleSelectedFont;
    UIColor *_titleColorNormal;
    UIColor *_titleColorSelected;
    long long _lineWithType;
    double _lineFixedWidth;
    double _lineHeight;
    double _lineTopSpaceToTitle;
    double _lineBottomSpace;
    UIColor *_lineColor;
    long long _currentIndex;
    UIScrollView *_scr;
    NSMutableArray *_buttons;
    UIView *_line;
    CDUnknownBlockType _didSelectIndex;
    UIView *_topBorder;
    UIView *_bottomBorder;
}

+ (id)generateItemsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)segment;
+ (id)array:(id)arg1 objectMaybeAtIndex:(long long)arg2;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(copy, nonatomic) CDUnknownBlockType didSelectIndex; // @synthesize didSelectIndex=_didSelectIndex;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIScrollView *scr; // @synthesize scr=_scr;
@property(nonatomic) _Bool canClickWhenSelected; // @synthesize canClickWhenSelected=_canClickWhenSelected;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) _Bool lineHasRoundedCorner; // @synthesize lineHasRoundedCorner=_lineHasRoundedCorner;
@property(nonatomic) double lineBottomSpace; // @synthesize lineBottomSpace=_lineBottomSpace;
@property(nonatomic) double lineTopSpaceToTitle; // @synthesize lineTopSpaceToTitle=_lineTopSpaceToTitle;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double lineFixedWidth; // @synthesize lineFixedWidth=_lineFixedWidth;
@property(nonatomic) long long lineWithType; // @synthesize lineWithType=_lineWithType;
@property(retain, nonatomic) UIColor *titleColorSelected; // @synthesize titleColorSelected=_titleColorSelected;
@property(retain, nonatomic) UIColor *titleColorNormal; // @synthesize titleColorNormal=_titleColorNormal;
@property(retain, nonatomic) UIFont *titleSelectedFont; // @synthesize titleSelectedFont=_titleSelectedFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double titleScaleForSelect; // @synthesize titleScaleForSelect=_titleScaleForSelect;
@property(nonatomic) double titleTop; // @synthesize titleTop=_titleTop;
@property(nonatomic) double lastItemRight; // @synthesize lastItemRight=_lastItemRight;
@property(nonatomic) double firstItemLeft; // @synthesize firstItemLeft=_firstItemLeft;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) long long borderType; // @synthesize borderType=_borderType;
@property(nonatomic) double itemSpaceMax; // @synthesize itemSpaceMax=_itemSpaceMax;
@property(nonatomic) double itemSpaceMin; // @synthesize itemSpaceMin=_itemSpaceMin;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) _Bool autoResizeWidthAfterSetItems; // @synthesize autoResizeWidthAfterSetItems=_autoResizeWidthAfterSetItems;
@property(nonatomic) _Bool autoResizeHeightAfterSetItems; // @synthesize autoResizeHeightAfterSetItems=_autoResizeHeightAfterSetItems;
@property(retain, nonatomic) NSArray *segmentItems; // @synthesize segmentItems=_segmentItems;
- (void).cxx_destruct;
- (id)buttonAtIndex:(long long)arg1;
- (id)getSegmentAtIndex:(long long)arg1;
- (void)tap:(id)arg1;
- (void)button:(id)arg1 andSelectedPercent:(double)arg2;
- (void)button:(id)arg1 isSelected:(_Bool)arg2;
- (void)selectedButtonScrolledToCenter;
- (void)scrollViewDidScroll:(id)arg1 withVCBeginDragging:(id)arg2 andCurrentIndex:(long long)arg3;
- (void)dragToIndex:(double)arg1;
- (struct CGRect)lineRectForButton:(id)arg1;
- (struct CGRect)part1RectDuringScrolleToIndex:(long long)arg1;
- (void)sendActionAndSelectIndex:(long long)arg1 withAnimation:(_Bool)arg2;
- (void)selectIndex:(long long)arg1 withAnimation:(_Bool)arg2;
- (void)selectIndex:(long long)arg1 withAnimation:(_Bool)arg2 andScrollToCenter:(_Bool)arg3;
- (void)segmentControllDidClick:(CDUnknownBlockType)arg1;
- (id)iconFromView:(id)arg1 andIsSelected:(_Bool)arg2;
- (id)labelFromView:(id)arg1 andIsSelected:(_Bool)arg2;
- (id)contentViewFromButton:(id)arg1;
- (void)updateTextColors;
- (void)updateButton:(id)arg1 withItem:(id)arg2;
- (void)initUI;
- (void)reloadView;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) double expectedHeight;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

