/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKKnowledgeStorage : NSObject <_DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, _DKKnowledgeSaving> {
    NSObject<OS_dispatch_queue> * _defaultResponseQueue;
    NSObject<OS_dispatch_queue> * _executionQueue;
    _DKCoreDataStorage * _storage;
}

@property (nonatomic, readonly) _DKCoreDataStorage *storage;

+ (id)storageWithDirectory:(id)arg1 readOnly:(BOOL)arg2;
+ (id)storeWithDirectory:(id)arg1 readOnly:(BOOL)arg2;

- (void).cxx_destruct;
- (void)closeStorage;
- (unsigned int)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;
- (unsigned int)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (unsigned int)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned int)arg2;
- (unsigned int)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned int)arg2;
- (BOOL)deleteObjects:(id)arg1 error:(id*)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned int)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned int)arg2 batchLimit:(unsigned int)arg3;
- (unsigned int)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned int)arg3;
- (unsigned int)deleteObjectsOlderThanDate:(id)arg1 limit:(unsigned int)arg2;
- (unsigned int)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned int)arg1 limit:(unsigned int)arg2;
- (BOOL)deleteStorage;
- (id)errorForException:(id)arg1;
- (unsigned int)eventCount;
- (id)eventCountPerStreamName;
- (id)executeQuery:(id)arg1 error:(id*)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)handleNilArrayError:(id /* block */)arg1 queue:(id)arg2;
- (id)initWithDirectory:(id)arg1 readOnly:(BOOL)arg2;
- (id)removeBadObjects:(id)arg1;
- (BOOL)saveObjects:(id)arg1 error:(id*)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)storage;

@end
