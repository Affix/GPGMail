/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCActivityTarget.h"

@class MCInvocationQueue, NSConditionLock, NSMutableDictionary, NSMutableSet, NSString;

@interface MFSpotlightManager : NSObject <MCActivityTarget>
{
    NSConditionLock *_attachmentIndexingLock;
    NSMutableSet *_messsagesScheduledForAttachmentIndexing;
    NSMutableDictionary *_queryObserverDictionary;
    MCInvocationQueue *_indexQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) MCInvocationQueue *indexQueue; // @synthesize indexQueue=_indexQueue;
- (void).cxx_destruct;
- (id)acquireQueryObserver:(long long)arg1;
- (void)unregisterQueryObserver:(long long)arg1;
- (long long)registerQueryObserver:(id)arg1;
- (void)immediatelyIndexAttachmentsForMessage:(id)arg1;
- (void)immediatelyIndexAttachmentsForMessages:(id)arg1;
- (void)indexAttachmentsForMessage:(id)arg1;
- (void)indexAttachmentsForMessages:(id)arg1;
- (void)_indexAttachmentsForScheduledMessages;
- (void)_triggerNowAttachmentIndexing;
- (void)_triggerDelayedAttachmentIndexing;
- (void)_scheduleAttachmentIndexingForMessages:(id)arg1;
- (void)_synchronouslyIndexAttachmentsForMessages:(id)arg1;
- (void)_synchronouslyIndexAttachmentsForMessage:(id)arg1;
- (BOOL)_shouldIndexAttachmentsForMessage:(id)arg1;
- (void)setAttributesForFileAtPath:(id)arg1 attributes:(id)arg2;
- (void)_setAttributesForFileAtPath:(id)arg1 attributes:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end
