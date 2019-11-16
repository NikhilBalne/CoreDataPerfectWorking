//
//  DetailViewController.h
//  CoreDataTableView
//
//  Created by Nikhil Balne on 26/12/17.
//  Copyright © 2017 Nikhil Balne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface DetailViewController : UIViewController
@property (strong) NSManagedObject *device;

@property (weak, nonatomic) IBOutlet UITextField *NameTextField;
@property (weak, nonatomic) IBOutlet UITextField *versionTextField;
@property (weak, nonatomic) IBOutlet UITextField *CompanyTextField;
- (IBAction)SaveBtnTpd:(id)sender;
- (IBAction)CancelBtnTpd:(id)sender;

@end
