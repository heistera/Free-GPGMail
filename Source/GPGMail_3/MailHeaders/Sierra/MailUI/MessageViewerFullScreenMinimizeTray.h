//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, MinimizeTrayTabBarView;

@interface MessageViewerFullScreenMinimizeTray : NSView
{
    CALayer *_dividerLayer;	// 152 = 0x98
    MinimizeTrayTabBarView *_tabBarView;	// 160 = 0xa0
}

@property(nonatomic) __weak MinimizeTrayTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(nonatomic) __weak CALayer *dividerLayer; // @synthesize dividerLayer=_dividerLayer;
- (void).cxx_destruct;	// IMP=0x000000010023abc4
- (void)hideTabs;	// IMP=0x000000010023ab28
- (void)showTabsWithNames:(id)arg1 tabBarWidth:(double)arg2;	// IMP=0x000000010023aa26
- (id)makeBackingLayer;	// IMP=0x000000010023a7d6
- (void)restoreMinimizedModalWindows;	// IMP=0x000000010023a790
- (unsigned long long)draggingEntered:(id)arg1;	// IMP=0x000000010023a77b
- (BOOL)wantsUpdateLayer;	// IMP=0x000000010023a770
- (void)awakeFromNib;	// IMP=0x000000010023a6d7

@end

