/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSData, NSDictionary, NSError, NSString;

@interface ATLegacyMessage : NSObject {
    NSString *_dataClass;
    unsigned int _messageId;
    unsigned int _messageType;
    NSString *_name;
    NSDictionary *_params;
    NSData *_payload;
    NSError *_result;
    unsigned int _session;
    NSData *_sig;
    double _timestamp;
}

@property(retain) NSString * dataClass;
@property unsigned int messageId;
@property unsigned int messageType;
@property(retain) NSString * name;
@property(retain) NSDictionary * parameters;
@property(retain) NSData * payload;
@property(retain) NSError * result;
@property unsigned int sessionNumber;
@property(retain) NSData * sig;
@property double timestamp;

+ (id)_messageTypeString:(unsigned int)arg1;
+ (unsigned int)currentSessionNumber;
+ (id)messageFromData:(id)arg1;
+ (id)messageFromDictionary:(id)arg1;
+ (id)messageFromHeader:(id)arg1 withParams:(id)arg2 andPayload:(id)arg3;
+ (id)messageWithName:(id)arg1 parameters:(id)arg2 session:(unsigned int)arg3;
+ (id)messageWithName:(id)arg1 parameters:(id)arg2;
+ (unsigned int)nextSessionNumber;
+ (void)setSessionNumber:(unsigned int)arg1;
+ (id)signedMessageWithName:(id)arg1 parameters:(id)arg2 sesssion:(unsigned long)arg3;

- (void).cxx_destruct;
- (id)data;
- (id)dataClass;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)messageId;
- (unsigned int)messageType;
- (id)name;
- (id)parameterForKey:(id)arg1;
- (id)parameters;
- (id)partialResponseWithParameters:(id)arg1;
- (id)payload;
- (id)responseWithResultError:(id)arg1 parameters:(id)arg2;
- (id)result;
- (unsigned int)sessionNumber;
- (void)setDataClass:(id)arg1;
- (void)setMessageId:(unsigned int)arg1;
- (void)setMessageType:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSessionNumber:(unsigned int)arg1;
- (void)setSig:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sig;
- (double)timestamp;

@end