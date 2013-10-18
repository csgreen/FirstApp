//
//  CSGAppDelegate.h
//  FirstApp
//
//  Created by Christina Green on 10/17/13.
//  Copyright (c) 2013 Greenster. All rights reserved.
//

#import <UIKit/UIKit.h>
//  this is a framework so need angle brackets

#import "CSGViewController.h"
//  this is our own class so only need quotes

@interface CSGAppDelegate : UIResponder <UIApplicationDelegate>
// in angle brackets, is a protocol - we are conforming to that protocol

@property (strong, nonatomic) UIWindow *window;

@end
