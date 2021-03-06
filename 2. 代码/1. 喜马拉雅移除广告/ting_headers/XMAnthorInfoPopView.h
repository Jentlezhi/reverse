//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMRoomBaseInfoView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView, UIViewController, XMInfoBoardView, XMLiveMedalView, XMLiveNoNetworkView, XMLiveRoomFlipView, XMWebImageView, YYThreadSafeArray;

@interface XMAnthorInfoPopView : XMRoomBaseInfoView <UIGestureRecognizerDelegate>
{
    UIView *_alpheBgView;
    UIView *_whiteBgView;
    UIView *_userContentView;
    XMLiveNoNetworkView *_netErrorView;
    XMWebImageView *_nobleHeaderImg;
    UIButton *_avatarImgBtn;
    UILabel *_nicknameLabel;
    UIView *_gendarAndLocationView;
    XMInfoBoardView *_genderView;
    XMInfoBoardView *_locationView;
    UIView *_subInfoView;
    UILabel *_constellation;
    UIView *_verticalLine;
    UILabel *_fansNumber;
    UILabel *_introLabel;
    UIView *_anchorVerifyView;
    UIImageView *_tagView;
    UILabel *_verifyInfoLabel;
    UIView *_nobleView;
    UILabel *_nobleLabel;
    XMWebImageView *_nobleImgview;
    UIView *_wealthAndFansView;
    XMLiveRoomFlipView *_wealthGradeView;
    XMWebImageView *_wealthUpperBase;
    UILabel *_upperTitleLabel;
    UILabel *_upperNumberLabel;
    UIView *_wealthGradeLower;
    UIImageView *_wealthGradePeak;
    UILabel *_lowerTitleLabel;
    UILabel *_lowerNumberLabel;
    UIImageView *_progressView;
    UIButton *_fansGroupView;
    XMWebImageView *_fansIconView;
    UILabel *_fansGroupNumber;
    XMLiveMedalView *_medalView;
    UIView *_bottomOperationView;
    UIButton *_followBtn;
    UIButton *_homePageBtn;
    UIButton *_atInfoUserBtn;
    UIButton *_chatBtn;
    struct CGRect _userContentOriginRect;
    unsigned long long _panDirection;
    _Bool _outOfRoom;
    CDUnknownBlockType _onHideBlock;
    UIViewController *_ctrl;
    YYThreadSafeArray *_galleryArray;
    UILabel *_permissionBoard;
    UIButton *_manageBtn;
    UIButton *_reportBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *reportBtn; // @synthesize reportBtn=_reportBtn;
@property(retain, nonatomic) UIButton *manageBtn; // @synthesize manageBtn=_manageBtn;
@property(retain, nonatomic) UILabel *permissionBoard; // @synthesize permissionBoard=_permissionBoard;
@property(retain, nonatomic) YYThreadSafeArray *galleryArray; // @synthesize galleryArray=_galleryArray;
@property(nonatomic) __weak UIViewController *ctrl; // @synthesize ctrl=_ctrl;
@property(copy, nonatomic) CDUnknownBlockType onHideBlock; // @synthesize onHideBlock=_onHideBlock;
@property(nonatomic) _Bool outOfRoom; // @synthesize outOfRoom=_outOfRoom;
- (void)onHideTap:(id)arg1;
- (void)hideWithAnimate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideWithAnimate:(_Bool)arg1;
- (void)showInfoPopAlertFrom:(id)arg1 animate:(_Bool)arg2;
- (unsigned long long)commitTranslationDirection:(struct CGPoint)arg1;
- (void)followersCountUpdate;
- (void)changeAnchorFollowStatus;
- (id)customedRequestUrl;
- (void)requestUserSpecialInfo;
- (void)requestUserCommonInfo;
- (void)requestUserDetailInfo;
- (void)onHandlePan:(id)arg1;
- (void)chatActionClicked:(id)arg1;
- (void)atInfoUserClicked:(id)arg1;
- (void)followActionClicked:(id)arg1;
- (void)homePageActionClicked:(id)arg1;
- (void)onReportClicked;
- (void)onManageClicked;
- (void)onAvatarClicked;
- (void)onFansClubClicked;
- (void)updateFollow;
- (void)updatePersonSpecialInfo;
- (void)updatePersonCommonInfo;
- (void)reloadContentView;
- (void)setupFlipView;
- (void)createNoNetworkView;
- (void)addBottomOperationView;
- (void)addAnchorVerifyView;
- (void)addNobleView;
- (void)addWealthAndFansView;
- (void)addMedalView;
- (void)addSubinfoView;
- (void)addGendarAndLocationView;
- (void)addUserAvatarAndNicknameView;
- (void)addIntroduceLabel;
- (void)customedInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

