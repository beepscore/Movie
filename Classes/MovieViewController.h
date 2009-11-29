//
//  MovieViewController.h
//  Movie
//
//  Created by Steve Baker on 11/28/09.
//  Copyright Beepscore LLC 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Movie;
@class MovieEditorViewController;

@interface MovieViewController : UIViewController {
    // instance variables
    Movie *movie;
    UILabel *titleLabel;
    UILabel *boxOfficeGrossLabel;
    UILabel *summaryLabel;
    MovieEditorViewController *editingViewController;
    
}

#pragma mark -
#pragma mark properties
@property(nonatomic,retain)Movie *movie;
@property(nonatomic,retain)IBOutlet UILabel *titleLabel;
@property(nonatomic,retain)IBOutlet UILabel *boxOfficeGrossLabel;
@property(nonatomic,retain)IBOutlet UILabel *summaryLabel;
@property(nonatomic,retain)IBOutlet MovieEditorViewController *editingViewController;

- (IBAction)edit;

@end

