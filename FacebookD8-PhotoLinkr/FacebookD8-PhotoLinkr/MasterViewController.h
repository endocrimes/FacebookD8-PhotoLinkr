//
//  MasterViewController.h
//  FacebookD8-PhotoLinkr
//
//  Created by Ivan Andriollo on 17/06/2014.
//  Copyright (c) 2014 PL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CloudKit/CloudKit.h>

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) CKDatabase* database;

@end

