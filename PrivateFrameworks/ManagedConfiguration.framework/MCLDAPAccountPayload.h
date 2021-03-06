/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCLDAPAccountPayload : MCPayload {
    NSString *_accountDescription;
    NSString *_accountPersistentUUID;
    NSString *_hostname;
    NSString *_password;
    NSArray *_searchSettings;
    BOOL _useSSL;
    NSNumber *_useSSLNum;
    NSString *_username;
}

@property (nonatomic, readonly, retain) NSString *accountDescription;
@property (nonatomic, copy) NSString *accountPersistentUUID;
@property (nonatomic, readonly, retain) NSString *hostname;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, readonly, retain) NSArray *searchSettings;
@property (nonatomic, readonly) BOOL useSSL;
@property (nonatomic, readonly) NSNumber *useSSLNum;
@property (nonatomic, retain) NSString *username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountPersistentUUID;
- (id)description;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;
- (id)payloadDescriptionKeyValueSections;
- (id)searchSettings;
- (void)setAccountPersistentUUID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (BOOL)useSSL;
- (id)useSSLNum;
- (id)username;

@end
