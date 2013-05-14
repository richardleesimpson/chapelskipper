//
//  AppDelegate.h
//  Chapel Skipper
//
//  Created by Richard Simpson on 5/13/13.
//  Copyright (c) 2013 Richard Simpson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PPRevealSideViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, PPRevealSideViewControllerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) PPRevealSideViewController *revealSideViewController;

@end
