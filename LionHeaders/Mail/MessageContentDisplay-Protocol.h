/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@protocol MessageContentDisplay <NSObject>
- (id)contentView;
- (id)viewForKeyViewLoop;
- (BOOL)prepareForMessage:(id)arg1 viewingState:(id)arg2;
- (void)display:(id)arg1 inContainerView:(id)arg2 invokeWhenDisplayChanged:(id)arg3 loadBody:(BOOL)arg4;
- (void)clearDisplayChangedInvocation;
- (void)loadMessageBody;
- (void)prepareToRemoveView;
- (void)highlightSearchText:(id)arg1;
- (id)selectedText;
- (id)selectedTextRepresentation;
- (void)setSelectedTextRepresentation:(id)arg1;
- (id)selectionParsedMessage;
- (id)attachmentsInSelection;
- (id)parsedMessage;
- (void)adjustFontSizeBy:(long long)arg1 viewingState:(id)arg2;
- (id)findTarget;
- (void)detectDataInMessage:(id)arg1 usingContext:(id)arg2;
- (void)cancelDataDetection;
- (void)informDataDetectorsThatViewWillDisappear;
- (void)informDataDetectorsThatViewDidAppear;
- (BOOL)bringYourOwnScrollbars;
- (void)makeMessageBeFirstResponder;
- (void)setShouldBecomeFirstResponder:(BOOL)arg1;

@optional
- (BOOL)isOkayToDownloadAttachment:(id)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setIsActiveSelection:(BOOL)arg1;
- (void)removeAllRedundantClusters;
- (void)setUpAccessibilityLinksFromView:(id)arg1;
- (void)removeAccessibilityLinks;
- (id)messageHeaderDisplay;
@property(nonatomic) BOOL isForPrinting;
@property id parentController;
@property BOOL isSelected;
@property BOOL displayAsSingleMessage;
@end
