//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TypeAheadWindow.h"

@class NSResponder;

@interface ComposeWindow : TypeAheadWindow
{
    BOOL _disableFrameConstraint;
    NSResponder *_nextFirstResponder;
}

@property(nonatomic) BOOL disableFrameConstraint; // @synthesize disableFrameConstraint=_disableFrameConstraint;
@property(retain, nonatomic) NSResponder *nextFirstResponder; // @synthesize nextFirstResponder=_nextFirstResponder;
//- (void).cxx_destruct;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (BOOL)makeFirstResponder:(id)arg1;

@end

