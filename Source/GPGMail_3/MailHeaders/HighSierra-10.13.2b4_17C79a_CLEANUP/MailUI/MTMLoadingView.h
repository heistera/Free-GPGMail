//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSView.h"

@class NSProgressIndicator;

@interface MTMLoadingView : NSView
{
    NSProgressIndicator *_progressIndicator;
}

@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
//- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;

@end

