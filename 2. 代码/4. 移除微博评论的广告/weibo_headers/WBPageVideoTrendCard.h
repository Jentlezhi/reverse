//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageTrendCard.h"

@class WBStoryItem;

@interface WBPageVideoTrendCard : WBPageTrendCard
{
    WBStoryItem *_item;
}

+ (Class)trendPageCardViewClass;
+ (Class)viewClass;
@property(retain, nonatomic) WBStoryItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;
- (double)trendItemSpace;
- (double)trendItemWidth;
- (id)trendCardViewModel2;

@end

