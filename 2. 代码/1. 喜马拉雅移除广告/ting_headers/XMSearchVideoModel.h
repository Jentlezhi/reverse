//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMSearchVideoModel : XMModel
{
    _Bool _is_v;
    _Bool _is_paid;
    _Bool _isNoCopyright;
    long long _verify_type;
    long long _upload_source;
    NSString *_title;
    long long _duration;
    long long _uid;
    NSString *_category_title;
    long long _category_id;
    NSString *_nickname;
    long long _album_id;
    long long _id;
    NSString *_album_title;
    NSString *_video_cover;
    long long _count_play;
}

@property(nonatomic) _Bool isNoCopyright; // @synthesize isNoCopyright=_isNoCopyright;
@property(nonatomic) long long count_play; // @synthesize count_play=_count_play;
@property(retain, nonatomic) NSString *video_cover; // @synthesize video_cover=_video_cover;
@property(retain, nonatomic) NSString *album_title; // @synthesize album_title=_album_title;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(nonatomic) _Bool is_paid; // @synthesize is_paid=_is_paid;
@property(nonatomic) long long album_id; // @synthesize album_id=_album_id;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long category_id; // @synthesize category_id=_category_id;
@property(retain, nonatomic) NSString *category_title; // @synthesize category_title=_category_title;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool is_v; // @synthesize is_v=_is_v;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long upload_source; // @synthesize upload_source=_upload_source;
@property(nonatomic) long long verify_type; // @synthesize verify_type=_verify_type;
- (void).cxx_destruct;

@end

