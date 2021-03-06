/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTabBarController : SKUIScrollingTabBarController {
    MusicMiniPlayerViewController *_miniPlayerViewController;
    BOOL _miniPlayerVisible;
    id /* block */ _nowPlayingPresentationCompletionHandler;
    MusicNowPlayingViewController *_nowPlayingViewController;
    MPAVController *_player;
    BOOL _shouldIgnorePresentations;
}

@property (nonatomic, readonly) MusicMiniPlayerViewController *miniPlayerViewController;
@property (getter=isMiniPlayerVisible, nonatomic) BOOL miniPlayerVisible;
@property (nonatomic, readonly) MusicNowPlayingViewController *nowPlayingViewController;
@property (nonatomic, retain) MPAVController *player;

- (void).cxx_destruct;
- (void)_playerContentsChangedNotification:(id)arg1;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_updateMiniPlayerVisiblity;
- (void)dealloc;
- (void)dismissMiniPlayerViewController;
- (BOOL)isMiniPlayerVisible;
- (id)miniPlayerViewController;
- (id)nowPlayingViewController;
- (id)player;
- (void)presentMiniPlayerViewController;
- (void)presentNowPlayingViewController;
- (void)presentNowPlayingViewControllerWithCompletion:(id /* block */)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setClientContext:(id)arg1;
- (void)setMiniPlayerVisible:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
