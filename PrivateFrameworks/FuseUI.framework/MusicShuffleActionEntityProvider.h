/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicShuffleActionEntityProvider : NSObject <MusicEntityProviding> {
    BOOL _editing;
    BOOL _hasShuffleAction;
    MusicShuffleActionEntityValueProvider *_shuffleActionEntityValueProvider;
    <MusicEntityProviding> *_sourceEntityProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <MusicEntityProviding> *sourceEntityProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadHasShuffleActionAllowingInvalidation:(BOOL)arg1;
- (id)_shuffleActionEntityValueProvider;
- (void)_sourceEntityProviderDidInvalidateNotification:(id)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned int)arg2;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (BOOL)hasEntities;
- (BOOL)hasEntitiesNotInLibrary;
- (BOOL)hasShuffleAction;
- (id)indexBarEntryAtIndex:(unsigned int)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithSourceEntityProvider:(id)arg1;
- (unsigned int)numberOfEntitiesInSection:(unsigned int)arg1;
- (unsigned int)numberOfIndexBarEntries;
- (unsigned int)numberOfSections;
- (unsigned int)sectionForSectionIndexBarEntryAtIndex:(unsigned int)arg1;
- (void)setEditing:(BOOL)arg1 returningInsertedSectionIndexSet:(id*)arg2 deletedSectionIndexSet:(id*)arg3;
- (id)sourceEntityProvider;

@end
