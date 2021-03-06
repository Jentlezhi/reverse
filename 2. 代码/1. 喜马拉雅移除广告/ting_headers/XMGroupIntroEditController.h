//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "HPGrowingTextViewDelegate-Protocol.h"

@class HPGrowingTextView, XMGroupTalkingItem;

@interface XMGroupIntroEditController : XMBaseVC <HPGrowingTextViewDelegate>
{
    _Bool _inRequest;
    XMGroupTalkingItem *_groupItem;
    HPGrowingTextView *_descField;
}

@property(nonatomic) _Bool inRequest; // @synthesize inRequest=_inRequest;
@property(retain, nonatomic) HPGrowingTextView *descField; // @synthesize descField=_descField;
@property(retain, nonatomic) XMGroupTalkingItem *groupItem; // @synthesize groupItem=_groupItem;
- (void).cxx_destruct;
- (id)checkInput;
- (void)updateRightButton;
- (void)growingTextViewDidChange:(id)arg1;
- (void)postGroupIntro;
- (void)onRightButton:(id)arg1;
- (void)buildUI;
- (void)didTap;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

