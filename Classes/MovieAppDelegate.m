//
//  MovieAppDelegate.m
//  Movie
//
//  Created by Steve Baker on 11/28/09.
//  Copyright Beepscore LLC 2009. All rights reserved.
//

#import "MovieAppDelegate.h"
#import "MovieViewController.h"

@implementation MovieAppDelegate

@synthesize window;
@synthesize viewController;

// MovieAppDelegate implements the <UIApplicationDelegate> protocol,
// and is the UIApplication object's delegate.
// When the UIApplication object finishes launching, it calls
// MovieAppDelegate -applicationDidFinishLaunching:
// Ref Dudney sec 3.6, 4.5
- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
