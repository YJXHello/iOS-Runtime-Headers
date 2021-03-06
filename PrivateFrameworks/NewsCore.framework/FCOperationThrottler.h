/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOperationThrottler : NSObject <FCOperationThrottler> {
    NSObject<OS_dispatch_source> * _dispatchSource;
    NSObject<OS_dispatch_group> * _handlerSynchronizationGroup;
    NSObject<OS_dispatch_queue> * _serialQueue;
    BOOL  _suspended;
}

@property BOOL suspended;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setSuspended:(BOOL)arg1;
- (BOOL)suspended;
- (void)tickle;
- (void)tickleWithCompletion:(id /* block */)arg1;

@end
