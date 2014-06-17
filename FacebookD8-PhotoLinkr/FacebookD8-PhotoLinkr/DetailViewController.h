//
//  DetailViewController.h
//  FacebookD8-PhotoLinkr
//
//  Created by Ivan Andriollo on 17/06/2014.
//  Copyright (c) 2014 PL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

