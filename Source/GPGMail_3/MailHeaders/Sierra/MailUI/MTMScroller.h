//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScroller.h"

@class NSObject<MTMScrollerDelegate>;

@interface MTMScroller : NSScroller
{
    BOOL _isFakeScroller;	// 232 = 0xe8
    BOOL _dontNotify;	// 233 = 0xe9
    NSObject<MTMScrollerDelegate> *_delegate;	// 240 = 0xf0
}

@property(nonatomic) __weak NSObject<MTMScrollerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL dontNotify; // @synthesize dontNotify=_dontNotify;
- (void).cxx_destruct;	// IMP=0x0000000100258326
- (void)drawKnob;	// IMP=0x0000000100258295
@property(nonatomic) BOOL isFakeScroller;
- (void)setDoubleValue:(double)arg1;	// IMP=0x0000000100258145

@end

