//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMDubShowVoiceTopicSelectItemModel : NSObject
{
    NSString *_topicCover;
    NSString *_topicTitle;
    NSString *_topicDetail;
    long long _tipCount;
    long long _activeCount;
    long long _topicId;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) long long activeCount; // @synthesize activeCount=_activeCount;
@property(nonatomic) long long tipCount; // @synthesize tipCount=_tipCount;
@property(retain, nonatomic) NSString *topicDetail; // @synthesize topicDetail=_topicDetail;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) NSString *topicCover; // @synthesize topicCover=_topicCover;
- (void).cxx_destruct;

@end

