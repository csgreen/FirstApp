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
// @property(nonatomic) float value;
// @property (nonatomic, assign) float minimumValue;

// @property (nonatomic, assign) float maximumValue;

- (IBAction)logSwitchStatus:(id)sender;

@property(nonatomic, readonly) id destinationViewController;

@end
