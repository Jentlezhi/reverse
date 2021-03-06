//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class CALayer, NSMutableArray;

@interface XMLiveMsgCollectionView : UICollectionView
{
    _Bool _shouldScrollToBottom;
    NSMutableArray *_tweens;
    CALayer *_headerMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *headerMaskLayer; // @synthesize headerMaskLayer=_headerMaskLayer;
@property(retain, nonatomic) NSMutableArray *tweens; // @synthesize tweens=_tweens;
@property(nonatomic) _Bool shouldScrollToBottom; // @synthesize shouldScrollToBottom=_shouldScrollToBottom;
- (void)scrollToBottomAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollToBottomImmediately;
- (void)killScroll;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)dealloc;

@end

