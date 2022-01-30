//
//  ViewController.h
//  Android Studio Kraken
//
//  Created by Andres Barbudo Rodriguez on 1/28/22.
//  Copyright © 2022 Andres Barbudo Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBookUI/AddressBookUI.h>

@interface ViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *firstName;
@property (weak, nonatomic) IBOutlet UILabel *phoneNumber;

- (IBAction)showPicker:(id)sender;

@end
