//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Assistant.h"

#import "MCActivityTarget.h"

@class MCActivityMonitor, NSButton, NSProgressIndicator, NSString, NSTextField, NSTimer, NSView;

@interface LibraryImportAssistant : Assistant <MCActivityTarget>
{
    BOOL _importWasSuccessful;	// 8 = 0x8
    NSView *_introView;	// 16 = 0x10
    NSView *_patienceView;	// 24 = 0x18
    NSView *_doneView;	// 32 = 0x20
    NSView *_errorView;	// 40 = 0x28
    NSView *_recoveryIntroView;	// 48 = 0x30
    NSTextField *_mailboxStatusField;	// 56 = 0x38
    NSTextField *_messageStatusField;	// 64 = 0x40
    NSTextField *_timeRemainingField;	// 72 = 0x48
    NSProgressIndicator *_progressBar;	// 80 = 0x50
    NSButton *_showNewFeaturesButton;	// 88 = 0x58
    NSTextField *_theNewFeaturesTextField;	// 96 = 0x60
    MCActivityMonitor *_activityMonitor;	// 104 = 0x68
    NSTimer *_updateTimer;	// 112 = 0x70
    long long _state;	// 120 = 0x78
}

@property(nonatomic) BOOL importWasSuccessful; // @synthesize importWasSuccessful=_importWasSuccessful;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) __weak MCActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
@property(nonatomic) __weak NSTextField *theNewFeaturesTextField; // @synthesize theNewFeaturesTextField=_theNewFeaturesTextField;
@property(nonatomic) __weak NSButton *showNewFeaturesButton; // @synthesize showNewFeaturesButton=_showNewFeaturesButton;
@property(nonatomic) __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) __weak NSTextField *timeRemainingField; // @synthesize timeRemainingField=_timeRemainingField;
@property(nonatomic) __weak NSTextField *messageStatusField; // @synthesize messageStatusField=_messageStatusField;
@property(nonatomic) __weak NSTextField *mailboxStatusField; // @synthesize mailboxStatusField=_mailboxStatusField;
@property(retain, nonatomic) NSView *recoveryIntroView; // @synthesize recoveryIntroView=_recoveryIntroView;
@property(retain, nonatomic) NSView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSView *doneView; // @synthesize doneView=_doneView;
@property(retain, nonatomic) NSView *patienceView; // @synthesize patienceView=_patienceView;
@property(retain, nonatomic) NSView *introView; // @synthesize introView=_introView;
- (void).cxx_destruct;	// IMP=0x00000001001b572a
- (void)showNewFeatures:(id)arg1;	// IMP=0x00000001001b53c8
- (void)synchronouslyDoTheImport;	// IMP=0x00000001001b4fca
- (id)_formattedTimeForSeconds:(double)arg1;	// IMP=0x00000001001b4c48
- (double)_runningAverageWithNewValue:(double)arg1;	// IMP=0x00000001001b4bc6
- (void)_updateProgress:(id)arg1;	// IMP=0x00000001001b4459
- (id)windowTitle;	// IMP=0x00000001001b43ec
- (void)goForward;	// IMP=0x00000001001b35e4
- (void)stop;	// IMP=0x00000001001b33fc
- (void)start;	// IMP=0x00000001001b301c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end
