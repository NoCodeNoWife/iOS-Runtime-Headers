/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFLocationController : NSObject {
    NSDictionary *_aliasDict;
    BOOL _fakeMode;
    NSArray *_firstGuessedLanguages;
    NSArray *_guessedCountries;
    NSString *_guessedCountryFromTelephony;
    NSSet *_validCountries;
    struct __WiFiDeviceClient { } *fWifiDevice;
    struct __WiFiManagerClient { } *fWifiManager;
}

@property (nonatomic) BOOL fakeMode;
@property (nonatomic, retain) NSArray *firstGuessedLanguages;
@property (nonatomic, retain) NSArray *guessedCountries;

+ (id)sharedBuddyLocationController;

- (void).cxx_destruct;
- (id)_checkForAliases:(id)arg1;
- (id)_checkForAliasesOrInvalid:(id)arg1;
- (id)_checkedArrayForString:(id)arg1;
- (void)_closeWifiConnection;
- (id)_countriesFromDefaults;
- (id)_countryFromTelephony;
- (void)_scanComplete:(id)arg1 error:(BOOL)arg2;
- (void)_setGuessedCountryDefault:(id)arg1;
- (void)_startWifiScan;
- (id)aliasDict;
- (void)dealloc;
- (BOOL)fakeMode;
- (id)firstGuessedLanguages;
- (BOOL)getCountryFromTelephony;
- (id)guessedCountries;
- (id)guessedCountryFromTelephony;
- (id)guessedLanguages;
- (id)init;
- (void)reset;
- (void)setFakeMode:(BOOL)arg1;
- (void)setFirstGuessedLanguages:(id)arg1;
- (void)setGuessedCountries:(id)arg1;

@end
