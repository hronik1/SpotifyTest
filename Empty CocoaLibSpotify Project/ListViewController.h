//
//  ListViewController.h
//  Empty CocoaLibSpotify Project
//
//  Created by Brent Hronk on 3/19/14.
//  Copyright (c) 2014 Your Company. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SPSearch;

@interface ListViewController : UITableViewController

@property NSString* artist;

@property SPSearch *search;
@end
