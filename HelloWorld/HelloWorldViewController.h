//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Bert Hendriksen on 14-05-12.
//  Copyright (c) 2012 Nederlandse Spoorwegen nv. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
- (IBAction)changeGreeting:(id)sender;

@property (copy, nonatomic) NSString *userName;
@end
