/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialLinkView : UIView {
    NSMutableArray *_buttons;
    <SKUIEditorialLinkViewDelegate> *_delegate;
    UIColor *_highlightedTextColor;
    int _horizontalAlignment;
    SKUIEditorialLinkLayout *_layout;
    UIColor *_textColor;
}

@property (nonatomic) <SKUIEditorialLinkViewDelegate> *delegate;
@property (nonatomic) int horizontalAlignment;
@property (nonatomic, retain) SKUIEditorialLinkLayout *linkLayout;

- (void).cxx_destruct;
- (void)_linkButtonAction:(id)arg1;
- (id)_newButton;
- (void)dealloc;
- (id)delegate;
- (int)horizontalAlignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)linkLayout;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHorizontalAlignment:(int)arg1;
- (void)setLinkLayout:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;

@end
