//
//  MPAppDelegate.h
//  MasterPassword
//
//  Created by Maarten Billemont on 24/11/11.
//  Copyright (c) 2011 Lyndir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface MPAppDelegate : PearlAppDelegate <MFMailComposeViewControllerDelegate>

- (void)showGuide;
- (void)loadKey:(BOOL)animated;

- (void)export;

@end