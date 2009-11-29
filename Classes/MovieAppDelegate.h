//
//  MovieAppDelegate.h
//  Movie
//
//  Created by Steve Baker on 11/28/09.
//  Copyright Beepscore LLC 2009. All rights reserved.
//  Ref Dudney iPhone SDK Development Ch 04

#import <UIKit/UIKit.h>

@class MovieViewController;

// MovieAppDelegate implements the <UIApplicationDelegate> protocol,
// and is the UIApplication object's delegate.
// Ref Dudney sec 3.6, 4.5
@interface MovieAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MovieViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MovieViewController *viewController;

@end

