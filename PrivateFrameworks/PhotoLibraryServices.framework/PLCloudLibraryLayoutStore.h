/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLibraryLayoutStore : NSObject {
    NSArray *_budgetingCategories;
    PLPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_storeQueue;
    unsigned long long _version;
}

+ (void)resetStoreUsingContext:(id)arg1;

- (id)bucketForAsset:(id)arg1;
- (id)categoryByIdentifier:(unsigned short)arg1;
- (void)dealloc;
- (id)defaultBudgetingCategories;
- (id)description;
- (void)enumerateCategoriesWithBlock:(id /* block */)arg1;
- (struct { BOOL x1; unsigned int x2; unsigned int x3; id x4; })excludeAssetWithUuid:(id)arg1;
- (struct { BOOL x1; unsigned int x2; unsigned int x3; id x4; })includeAssetWithUuid:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)resetStore;
- (id)resourcesForAsset:(id)arg1 andQualityClass:(unsigned short)arg2;
- (void)validateConfiguration:(id)arg1;

@end
