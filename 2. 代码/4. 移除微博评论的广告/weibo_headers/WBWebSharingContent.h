//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WBWebSharingContent : NSObject
{
    NSURL *_externalIconURL;
    NSString *_externalTitle;
    NSString *_externalDescription;
    NSString *_pageID;
    NSString *_pageTitle;
    NSString *_shareURL;
    NSString *_sheetTitle;
    NSString *_sheetSubTtile;
    long long _shareStyle;
    NSString *_shareComposer;
    NSString *_shareComposerImage;
    NSString *_shareWeChatImage;
    NSString *_share_wechat_miniprogram_path;
    NSString *_share_wechat_miniprogram_pic;
    NSString *_shareConfigs;
    NSString *_extString;
}

@property(copy, nonatomic) NSString *extString; // @synthesize extString=_extString;
@property(copy, nonatomic) NSString *shareConfigs; // @synthesize shareConfigs=_shareConfigs;
@property(copy, nonatomic) NSString *share_wechat_miniprogram_pic; // @synthesize share_wechat_miniprogram_pic=_share_wechat_miniprogram_pic;
@property(copy, nonatomic) NSString *share_wechat_miniprogram_path; // @synthesize share_wechat_miniprogram_path=_share_wechat_miniprogram_path;
@property(copy, nonatomic) NSString *shareWeChatImage; // @synthesize shareWeChatImage=_shareWeChatImage;
@property(copy, nonatomic) NSString *shareComposerImage; // @synthesize shareComposerImage=_shareComposerImage;
@property(copy, nonatomic) NSString *shareComposer; // @synthesize shareComposer=_shareComposer;
@property(nonatomic) long long shareStyle; // @synthesize shareStyle=_shareStyle;
@property(copy, nonatomic) NSString *sheetSubTtile; // @synthesize sheetSubTtile=_sheetSubTtile;
@property(copy, nonatomic) NSString *sheetTitle; // @synthesize sheetTitle=_sheetTitle;
@property(copy, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *externalDescription; // @synthesize externalDescription=_externalDescription;
@property(copy, nonatomic) NSString *externalTitle; // @synthesize externalTitle=_externalTitle;
@property(retain, nonatomic) NSURL *externalIconURL; // @synthesize externalIconURL=_externalIconURL;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

