//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

#import "NSScrollViewDelegate.h"

@class NSString;

@interface MailTableView : NSTableView <NSScrollViewDelegate>
{
    BOOL _keyEventHandled;	// 448 = 0x1c0
    BOOL _delegateProvidesDragImage;	// 449 = 0x1c1
    BOOL _delegateDoesCommandBySelector;	// 450 = 0x1c2
    BOOL _delegateDragWillEndOperation;	// 451 = 0x1c3
    BOOL _delegateDraggedImageMovedTo;	// 452 = 0x1c4
    BOOL _delegateProvidesBackgroundShadedRegions;	// 453 = 0x1c5
    BOOL _delegateProvidesHighlightStyle;	// 454 = 0x1c6
    BOOL _delegateRespondsToWillDrawRowsInRange;	// 455 = 0x1c7
    BOOL _delegateApprovesScrolling;	// 456 = 0x1c8
    BOOL _delegateRespondsToGotEvent;	// 457 = 0x1c9
    BOOL _delegateRespondsToMouseDown;	// 458 = 0x1ca
    BOOL _delegateRespondsToWillMoveToWindow;	// 459 = 0x1cb
    BOOL _delegateRespondsToDidMoveToWindow;	// 460 = 0x1cc
    BOOL _delegateRespondsToWillStartLiveResize;	// 461 = 0x1cd
    BOOL _delegateRespondsToDidEndLiveResize;	// 462 = 0x1ce
    BOOL _delegateRespondsToDidBecomeFirstResponder;	// 463 = 0x1cf
    BOOL _delegateRespondsToDidResignFirstResponder;	// 464 = 0x1d0
    BOOL _delegateRespondsToTopLineColor;	// 465 = 0x1d1
    BOOL _delegateApprovesRemoveColumn;	// 466 = 0x1d2
    BOOL _delegateApprovesAddColumn;	// 467 = 0x1d3
    BOOL _delegateRespondsToUserDidScrollInTableView;	// 468 = 0x1d4
    BOOL _delegateRespondsToPrepareContentInRange;	// 469 = 0x1d5
    BOOL _delegateRespondsToAccesibilityUILinkedViewsForMailTableView;	// 470 = 0x1d6
    BOOL _didLazyLoadMenu;	// 471 = 0x1d7
    long long _virtualClickedRow;	// 472 = 0x1d8
}

@property(nonatomic) BOOL didLazyLoadMenu; // @synthesize didLazyLoadMenu=_didLazyLoadMenu;
@property(nonatomic) long long virtualClickedRow; // @synthesize virtualClickedRow=_virtualClickedRow;
@property(nonatomic) BOOL delegateRespondsToAccesibilityUILinkedViewsForMailTableView; // @synthesize delegateRespondsToAccesibilityUILinkedViewsForMailTableView=_delegateRespondsToAccesibilityUILinkedViewsForMailTableView;
@property(nonatomic) BOOL delegateRespondsToPrepareContentInRange; // @synthesize delegateRespondsToPrepareContentInRange=_delegateRespondsToPrepareContentInRange;
@property(nonatomic) BOOL delegateRespondsToUserDidScrollInTableView; // @synthesize delegateRespondsToUserDidScrollInTableView=_delegateRespondsToUserDidScrollInTableView;
@property(nonatomic) BOOL delegateApprovesAddColumn; // @synthesize delegateApprovesAddColumn=_delegateApprovesAddColumn;
@property(nonatomic) BOOL delegateApprovesRemoveColumn; // @synthesize delegateApprovesRemoveColumn=_delegateApprovesRemoveColumn;
@property(nonatomic) BOOL delegateRespondsToTopLineColor; // @synthesize delegateRespondsToTopLineColor=_delegateRespondsToTopLineColor;
@property(nonatomic) BOOL delegateRespondsToDidResignFirstResponder; // @synthesize delegateRespondsToDidResignFirstResponder=_delegateRespondsToDidResignFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidBecomeFirstResponder; // @synthesize delegateRespondsToDidBecomeFirstResponder=_delegateRespondsToDidBecomeFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidEndLiveResize; // @synthesize delegateRespondsToDidEndLiveResize=_delegateRespondsToDidEndLiveResize;
@property(nonatomic) BOOL delegateRespondsToWillStartLiveResize; // @synthesize delegateRespondsToWillStartLiveResize=_delegateRespondsToWillStartLiveResize;
@property(nonatomic) BOOL delegateRespondsToDidMoveToWindow; // @synthesize delegateRespondsToDidMoveToWindow=_delegateRespondsToDidMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToWillMoveToWindow; // @synthesize delegateRespondsToWillMoveToWindow=_delegateRespondsToWillMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToMouseDown; // @synthesize delegateRespondsToMouseDown=_delegateRespondsToMouseDown;
@property(nonatomic) BOOL delegateRespondsToGotEvent; // @synthesize delegateRespondsToGotEvent=_delegateRespondsToGotEvent;
@property(nonatomic) BOOL delegateApprovesScrolling; // @synthesize delegateApprovesScrolling=_delegateApprovesScrolling;
@property(nonatomic) BOOL delegateRespondsToWillDrawRowsInRange; // @synthesize delegateRespondsToWillDrawRowsInRange=_delegateRespondsToWillDrawRowsInRange;
@property(nonatomic) BOOL delegateProvidesHighlightStyle; // @synthesize delegateProvidesHighlightStyle=_delegateProvidesHighlightStyle;
@property(nonatomic) BOOL delegateProvidesBackgroundShadedRegions; // @synthesize delegateProvidesBackgroundShadedRegions=_delegateProvidesBackgroundShadedRegions;
@property(nonatomic) BOOL delegateDraggedImageMovedTo; // @synthesize delegateDraggedImageMovedTo=_delegateDraggedImageMovedTo;
@property(nonatomic) BOOL delegateDragWillEndOperation; // @synthesize delegateDragWillEndOperation=_delegateDragWillEndOperation;
@property(nonatomic) BOOL delegateDoesCommandBySelector; // @synthesize delegateDoesCommandBySelector=_delegateDoesCommandBySelector;
@property(nonatomic) BOOL delegateProvidesDragImage; // @synthesize delegateProvidesDragImage=_delegateProvidesDragImage;
@property BOOL keyEventHandled; // @synthesize keyEventHandled=_keyEventHandled;
- (id)accessibilityLinkedUIElements;	// IMP=0x00000001001edbf2
- (void)prepareContentInRect:(struct CGRect)arg1;	// IMP=0x00000001001edb07
- (void)reloadData;	// IMP=0x00000001001eda83
- (BOOL)_isRichTableView;	// IMP=0x00000001001eda4f
- (void)didScrollInScrollView:(id)arg1;	// IMP=0x00000001001ed9e4
- (void)scrollRowToVisible:(long long)arg1 position:(long long)arg2;	// IMP=0x000000010004c17c
- (void)showSelectionAndCenter:(BOOL)arg1;	// IMP=0x000000010004c134
@property(readonly, nonatomic) BOOL isSelectionVisible;
@property(readonly, nonatomic) long long lastRowInSelection;
@property(readonly, nonatomic) long long firstRowInSelection;
- (BOOL)resignFirstResponder;	// IMP=0x00000001000599cf
- (BOOL)becomeFirstResponder;	// IMP=0x000000010002eba9
- (void)viewDidMoveToSuperview;	// IMP=0x00000001001ed8e1
- (void)viewWillMoveToSuperview:(id)arg1;	// IMP=0x00000001001ed86f
- (void)viewDidMoveToWindow;	// IMP=0x0000000100022915
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x0000000100022870
- (void)_postEventNotification:(id)arg1 fromCell:(id)arg2;	// IMP=0x00000001001ed7aa
- (void)mouseUp:(id)arg1;	// IMP=0x00000001000b4681
- (void)_logSpotlightInfoForClickedMessage;	// IMP=0x00000001001ed1d7
- (void)mouseDown:(id)arg1;	// IMP=0x00000001000556ae
- (long long)clickedRow;	// IMP=0x00000001000b36de
- (void)drawGridInClipRect:(struct CGRect)arg1;	// IMP=0x0000000100034b30
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;	// IMP=0x00000001001ed031
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000100034700
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;	// IMP=0x000000010003483f
- (void)_colorizeRow:(long long)arg1 inRect:(struct CGRect)arg2 clipRect:(struct CGRect)arg3;	// IMP=0x00000001001eca5d
- (void)_highlightRect:(struct CGRect)arg1 withColor:(id)arg2 usingStyle:(long long)arg3;	// IMP=0x00000001001ec890
@property(readonly, nonatomic) BOOL shouldUseSecondaryHighlightColor;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;	// IMP=0x00000001001ec70a
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;	// IMP=0x00000001001ec69c
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;	// IMP=0x00000001000b0278
- (void)addTableColumn:(id)arg1;	// IMP=0x0000000100032293
- (void)removeTableColumn:(id)arg1;	// IMP=0x0000000100017b06
- (void)moveColumn:(long long)arg1 toColumn:(long long)arg2;	// IMP=0x00000001001ec585
- (void)setTableColumn:(id)arg1 toVisible:(BOOL)arg2 atPosition:(long long)arg3;	// IMP=0x00000001001ec470
- (void)scrollRowToVisible:(long long)arg1;	// IMP=0x0000000100058089
- (void)showTableColumnsFromArray:(id)arg1 allColumns:(id)arg2;	// IMP=0x0000000100031c45
- (void)drawBackgroundOverhangInRect:(struct CGRect)arg1;	// IMP=0x0000000100034b38
- (id)menu;	// IMP=0x00000001000b3189
@property __weak id <MailTableViewDelegate> delegate;
- (void)keyDown:(id)arg1;	// IMP=0x000000010009a44c
- (void)insertText:(id)arg1;	// IMP=0x00000001001ec43a
- (void)doCommandBySelector:(SEL)arg1;	// IMP=0x000000010009a53c
- (BOOL)respondsToSelector:(SEL)arg1;	// IMP=0x00000001001ec3f8
- (void)viewDidEndLiveResize;	// IMP=0x00000001001ec372
- (void)viewWillStartLiveResize;	// IMP=0x00000001001ec2ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100015167
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001ec283
- (void)_mailTableViewCommonInit;	// IMP=0x000000010001596f
- (id)menuForEvent:(id)arg1;	// IMP=0x00000001000b30dc
- (BOOL)isOpaque;	// IMP=0x00000001000346f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

