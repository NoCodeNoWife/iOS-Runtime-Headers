/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskExecution : NSObject <AFSiriResponseHandling, NSXPCListenerDelegate> {
    id /* block */ _completionHandler;
    id /* block */ _deliveryHandler;
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriRequest *_request;
    int _state;
    <AFSiriTaskDelivering> *_taskDeliverer;
    NSXPCListener *_taskResponseListener;
    AFWatchdogTimer *_taskResponseWatchdogTimer;
    NSXPCListener *_usageResultListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (void)_completeWithResponse:(id)arg1;
- (void)_completeWithResponse:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2;
- (void)handleSiriResponse:(id)arg1;
- (id)init;
- (id)initWithRequest:(id)arg1 taskDeliverer:(id)arg2 usageResultListener:(id)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDeliveryHandler:(id /* block */)arg1;
- (void)start;

@end
