//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMLImageTextMatchFloatViewItemProtocol-Protocol.h"

@class NSString, WBMLImageTextLiveBillboardModel;

@interface WBMLImageTextFloatWindowMaskWrapper : NSObject <WBMLImageTextMatchFloatViewItemProtocol>
{
    WBMLImageTextLiveBillboardModel *_mask;
}

+ (id)wrapperForMask:(id)arg1;
@property(retain, nonatomic) WBMLImageTextLiveBillboardModel *mask; // @synthesize mask=_mask;
- (void).cxx_destruct;
- (id)text;
- (id)time_text;
- (id)right_name;
- (id)right_score;
- (id)right_logo;
- (id)left_name;
- (id)left_score;
- (id)left_logo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

