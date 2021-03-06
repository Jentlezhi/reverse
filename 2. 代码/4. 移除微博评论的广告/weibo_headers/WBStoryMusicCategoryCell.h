//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol WBStoryMusicCategoryCellDelegate;

@interface WBStoryMusicCategoryCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSArray *_musicCategoryArray;
    id <WBStoryMusicCategoryCellDelegate> _delegate;
    UICollectionView *_collectionView;
    double _cellAnimationTime;
}

+ (double)getMiddleMargin;
+ (double)getBottomMargin;
+ (double)getTopMargin;
@property(nonatomic) double cellAnimationTime; // @synthesize cellAnimationTime=_cellAnimationTime;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WBStoryMusicCategoryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *musicCategoryArray; // @synthesize musicCategoryArray=_musicCategoryArray;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)resetFoldStatus;
- (void)dealloc;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

