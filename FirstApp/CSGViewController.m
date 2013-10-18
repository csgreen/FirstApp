//
//  CSGViewController.m
//  FirstApp
//
//  Created by Christina Green on 10/17/13.
//  Copyright (c) 2013 Greenster. All rights reserved.
//

#import "CSGViewController.h"


@implementation CSGViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.

//    [_mySwitch setOn: NO];
}

- (IBAction)logSwitchStatus:(id)sender
{
    NSLog(@"Switch is: %d", _mySwitch.isOn);
}

- (IBAction)logSliderStatus:(id)sender
{
    if (_mySlider.value > 1) {
        NSLog(@"Max Amount");
    }else{
        NSLog(@"Not Enough");
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
// adding to comments
