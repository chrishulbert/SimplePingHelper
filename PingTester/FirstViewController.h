//
//  FirstViewController.h
//  PingTester
//
//  Created by Chris Hulbert on 18/01/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController <UITextFieldDelegate>

@property(nonatomic,assign) IBOutlet UITextField* ipAddr;
@property(nonatomic,assign) IBOutlet UITextView* results;

@end
