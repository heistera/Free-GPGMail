//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class ConversationMember, MessageWebDocumentView, NSArray, NSLayoutConstraint, NSLayoutGuide;

@interface BannerContainerViewController : NSViewController
{
    BOOL _loaded;	// 100 = 0x64
    BOOL _isSingleton;	// 101 = 0x65
    NSLayoutConstraint *_heightConstraint;	// 104 = 0x68
    MessageWebDocumentView *_webDocumentView;	// 112 = 0x70
    NSLayoutGuide *_contentLayoutGuide;	// 120 = 0x78
    NSLayoutConstraint *_leadingMargin;	// 128 = 0x80
    NSArray *_bannerViewControllers;	// 136 = 0x88
}

@property(readonly, nonatomic) NSArray *bannerViewControllers; // @synthesize bannerViewControllers=_bannerViewControllers;
@property(nonatomic) __weak NSLayoutConstraint *leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) __weak NSLayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
- (void).cxx_destruct;	// IMP=0x00000001000e74ea
@property(nonatomic) BOOL isSingleton; // @synthesize isSingleton=_isSingleton;
- (void)updateBannerDisplay;	// IMP=0x000000010004183b
- (void)addSubviewForBanner:(id)arg1;	// IMP=0x00000001000a9939
- (void)updateLoaded;	// IMP=0x0000000100040c95
@property(retain) ConversationMember *representedObject;
- (void)viewDidLoad;	// IMP=0x00000001000e726c
- (void)dealloc;	// IMP=0x00000001000b5b32
- (void)_bannerContainerViewControllerCommonInit;	// IMP=0x0000000100040a5f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100040a1a
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000e71fa

@end

