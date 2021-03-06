//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBIMRequest : NSObject
{
    _Bool _jsonOnly;
    int _proto;
    int _type;
    NSDictionary *_params;
    NSString *_security;
    NSString *_requestId;
    long long _headerFlags;
    long long _transactionId;
}

+ (long long)_nextTransactionId;
+ (id)requestWithType:(int)arg1 proto:(int)arg2 params:(id)arg3 jsonOnly:(_Bool)arg4 security:(id)arg5;
+ (id)requestWithType:(int)arg1 proto:(int)arg2 params:(id)arg3;
@property(nonatomic) long long transactionId; // @synthesize transactionId=_transactionId;
@property(nonatomic) long long headerFlags; // @synthesize headerFlags=_headerFlags;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *security; // @synthesize security=_security;
@property(nonatomic) _Bool jsonOnly; // @synthesize jsonOnly=_jsonOnly;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int proto; // @synthesize proto=_proto;
- (void).cxx_destruct;
- (_Bool)isJoinRoomRequest;
- (id)_bodyData;
- (id)_headerData:(_Bool)arg1;
- (id)postDataWithHasToken:(_Bool)arg1 inPush:(_Bool)arg2;
- (id)initWithType:(int)arg1 proto:(int)arg2 params:(id)arg3 jsonOnly:(_Bool)arg4 security:(id)arg5;
- (id)initWithType:(int)arg1 proto:(int)arg2 params:(id)arg3;

@end

