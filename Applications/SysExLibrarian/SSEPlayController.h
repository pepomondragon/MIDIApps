#import <Cocoa/Cocoa.h>

@class OFScheduledEvent;
@class SSEMainWindowController;
@class SSEMIDIController;


@interface SSEPlayController : NSObject
{
    IBOutlet NSPanel *sheetWindow;
    IBOutlet NSProgressIndicator *progressIndicator;
    IBOutlet NSTextField *progressMessageField;
    IBOutlet NSTextField *progressBytesField;

    SSEMainWindowController *nonretainedMainWindowController;
    SSEMIDIController *nonretainedMIDIController;

    // Transient data
    OFScheduledEvent *progressUpdateEvent;
}

- (id)initWithWindowController:(SSEMainWindowController *)mainWindowController midiController:(SSEMIDIController *)midiController;

// Main window controller sends this to begin playing
- (void)playMessages:(NSArray *)messages;

// Actions
- (IBAction)cancelPlaying:(id)sender;

@end