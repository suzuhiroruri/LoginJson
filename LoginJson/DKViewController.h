//
//  DKViewController.h
//  LoginJson
//
//  Created by Hiromasa Suzuki on 13/07/28.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DKViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *txtUsername;
@property (weak, nonatomic) IBOutlet UITextField *txtPassword;
- (IBAction)loginClicked:(id)sender;
- (IBAction)backgroundClick:(id)sender;

@end
