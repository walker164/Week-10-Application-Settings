//
//  ApplicationSettingsAppDelegate.h
//  ApplicationSettings
//
//  Created by Wei-Meng Lee on 3/8/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ApplicationSettingsViewController;

@interface ApplicationSettingsAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ApplicationSettingsViewController *viewController;

@end
