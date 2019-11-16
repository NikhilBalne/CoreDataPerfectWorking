//
//  ViewController.h
//  CoreDataTableView
//
//  Created by Nikhil Balne on 26/12/17.
//  Copyright © 2017 Nikhil Balne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "DetailViewController.h"

@interface ViewController : UIViewController <UITableViewDelegate,UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end

