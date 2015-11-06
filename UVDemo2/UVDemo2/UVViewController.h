//
//  UVViewController.h
//  UVDemo2
//
//  Created by Austin Taylor on 9/30/13.
//  Copyright (c) 2013 UserVoice. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserVoice.h"

@interface UVViewController : UIViewController<UVDelegate>

- (IBAction)launchUserVoice:(id)sender;
- (IBAction)launchForum:(id)sender;
- (IBAction)launchIdeaForm:(id)sender;
- (IBAction)launchTicketForm:(id)sender;

@end
