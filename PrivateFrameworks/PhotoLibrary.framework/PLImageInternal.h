/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSURL, NSData, UIImage;



@interface PLImageInternal : MLPhotoMemoryStorage 
{
    NSURL *_url;
    NSData *_data;
    NSData *_urlData;
    UIImage *_previewImage;
}


- (NSInteger)imageID;
- (id)imageWithFormat:(NSInteger)arg1;
- (BOOL)hasFullSizeImage;
- (id)title;
- (void)dealloc;
- (id)_data;

@end