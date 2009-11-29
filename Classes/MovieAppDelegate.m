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
