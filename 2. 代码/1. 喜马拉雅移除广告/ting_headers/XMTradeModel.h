//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMTradeModel : XMModel
{
    unsigned long long _pageId;
    unsigned long long _maxPageId;
    NSArray *_data;
    unsigned long long _categoryId;
    NSString *_categoryTitle;
}

+ (id)xmm_modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSString *categoryTitle; // @synthesize categoryTitle=_categoryTitle;
@property(nonatomic) unsigned long long categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long maxPageId; // @synthesize maxPageId=_maxPageId;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;

@end

