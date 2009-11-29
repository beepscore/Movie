//
//  MovieViewController.h
//  Movie
//
//  Created by Steve Baker on 11/28/09.
//  Copyright Beepscore LLC 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Movie;

@interface MovieViewController : UIViewController {
    // instance variables
    Movie *movie;
    UILabel *titleLabel;
    UILabel *boxOfficeGrossLabel;
    UILabel *summaryLabel;    
}

#pragma mark -
#pragma mark properties
@property(nonatomic,retain)Movie *movie;
@property(nonatomic,retain)IBOutlet UILabel *titleLabel;
@property(nonatomic,retain)IBOutlet UILabel *boxOfficeGrossLabel;
@property(nonatomic,retain)IBOutlet UILabel *summaryLabel;

- (IBAction)edit;

@end

