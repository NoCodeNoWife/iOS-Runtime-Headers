/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate> {
    HAPCharacteristic *_reachabilityCharacteristic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) HAPCharacteristic *reachabilityCharacteristic;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)__isReachable;
- (BOOL)__parseBridgeService:(id)arg1;
- (BOOL)__parseServices;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (BOOL)isPrimary;
- (BOOL)mergeWithAccessory:(id)arg1;
- (id)reachabilityCharacteristic;
- (void)setReachabilityCharacteristic:(id)arg1;
- (void)setReachable:(BOOL)arg1;
- (id)shortDescription;

@end
