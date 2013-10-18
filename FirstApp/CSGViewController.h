//
//  CSGViewController.h
//  FirstApp
//
//  Created by Christina Green on 10/17/13.
//  Copyright (c) 2013 Greenster. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSGViewController : UIViewController

@property (nonatomic, weak) IBOutlet UISwitch *mySwitch;
//  weak means that the storyboard owns it

@property (nonatomic, weak) IBOutlet UISlider *mySlider;

- (IBAction)logSwitchStatus:(id)sender;

@end
