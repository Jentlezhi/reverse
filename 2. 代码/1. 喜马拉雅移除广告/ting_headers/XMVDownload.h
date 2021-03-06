//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSArray, NSDictionary, NSLock, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol XMVideoDownloadProtocol;

@interface XMVDownload : NSObject <NSURLSessionDataDelegate>
{
    id <XMVideoDownloadProtocol> _downloadDelegate;
    NSArray *_whitelistHeaderKeys;
    NSDictionary *_additionalHeaders;
    NSArray *_acceptContentTypes;
    CDUnknownBlockType _unsupportContentTypeFilter;
    NSLock *_coreLock;
    NSURLSession *_session;
    NSOperationQueue *_sessionDelegateQueue;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSMutableDictionary *_errorDictionary;
    NSMutableDictionary *_requestDictionary;
    NSMutableDictionary *_delegateDictionary;
    NSMutableDictionary *_downloadRequestDictionary;
    double _timeoutInterval;
}

+ (id)download;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) NSMutableDictionary *downloadRequestDictionary; // @synthesize downloadRequestDictionary=_downloadRequestDictionary;
@property(retain, nonatomic) NSMutableDictionary *delegateDictionary; // @synthesize delegateDictionary=_delegateDictionary;
@property(retain, nonatomic) NSMutableDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property(retain, nonatomic) NSMutableDictionary *errorDictionary; // @synthesize errorDictionary=_errorDictionary;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSOperationQueue *sessionDelegateQueue; // @synthesize sessionDelegateQueue=_sessionDelegateQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSLock *coreLock; // @synthesize coreLock=_coreLock;
@property(copy, nonatomic) CDUnknownBlockType unsupportContentTypeFilter; // @synthesize unsupportContentTypeFilter=_unsupportContentTypeFilter;
@property(copy, nonatomic) NSArray *acceptContentTypes; // @synthesize acceptContentTypes=_acceptContentTypes;
@property(copy, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(copy, nonatomic) NSArray *whitelistHeaderKeys; // @synthesize whitelistHeaderKeys=_whitelistHeaderKeys;
@property(nonatomic) __weak id <XMVideoDownloadProtocol> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)downloadWithRequest:(id)arg1 delegate:(id)arg2 historyDownloadRequest:(id)arg3;
- (id)downloadWithRequest:(id)arg1 delegate:(id)arg2;
- (id)availableHeaderKeys;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

