//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class XMOMYQRCodeEntryButtonPresenter, XMOMYQRCodeModel;

@interface XMOMYQRCodeEntryButton : UIButton
{
    XMOMYQRCodeModel *_model;
    CDUnknownBlockType _shouldLoginAction;
    CDUnknownBlockType _getCodeModelAction;
    CDUnknownBlockType _prePushActionBlock;
    XMOMYQRCodeEntryButtonPresenter *_presenter;
}

+ (id)buttonWithType:(long long)arg1;
@property(retain, nonatomic) XMOMYQRCodeEntryButtonPresenter *presenter; // @synthesize presenter=_presenter;
@property(copy, nonatomic) CDUnknownBlockType prePushActionBlock; // @synthesize prePushActionBlock=_prePushActionBlock;
@property(copy, nonatomic) CDUnknownBlockType getCodeModelAction; // @synthesize getCodeModelAction=_getCodeModelAction;
@property(copy, nonatomic) CDUnknownBlockType shouldLoginAction; // @synthesize shouldLoginAction=_shouldLoginAction;
@property(retain, nonatomic) XMOMYQRCodeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;

@end

