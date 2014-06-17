//
//  AppDelegate.h
//  FacebookD8-PhotoLinkr
//
//  Created by Ivan Andriollo on 17/06/2014.
//  Copyright (c) 2014 PL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CloudKit/CloudKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) CKDatabase* database;

@end

