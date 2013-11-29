//
//  ApplicationSettingsViewController.h
//  ApplicationSettings
//
//  Created by Sean Gray 11/28/2013.
//

#import <UIKit/UIKit.h>

@interface ApplicationSettingsViewController : UIViewController 
<UIPickerViewDataSource, UIPickerViewDelegate> 
{
        IBOutlet UITextField *loginName;
        IBOutlet UITextField *password;
        IBOutlet UIPickerView *favoriteColor;
}

@property (nonatomic, retain) UITextField *loginName;
@property (nonatomic, retain) UITextField *password;
@property (nonatomic, retain) UIPickerView *favoriteColor;

-(IBAction) loadSettings: (id) sender;
-(IBAction) saveSettings: (id) sender;
-(IBAction) doneEditing: (id) sender;

@end
