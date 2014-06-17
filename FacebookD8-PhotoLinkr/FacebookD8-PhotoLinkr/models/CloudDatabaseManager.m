//
//  CloudDatabaseManager.m
//  FacebookD8-PhotoLinkr
//
//  Created by Ivan Andriollo on 17/06/2014.
//  Copyright (c) 2014 PL. All rights reserved.
//

#import "CloudDatabaseManager.h"

@implementation CloudDatabaseManager

+ (CloudDatabaseManager *)sharedInstance
{
    static dispatch_once_t predicate;
    static CloudDatabaseManager *theSharedInstance = nil;
    
    dispatch_once( &predicate, ^{ theSharedInstance = [[CloudDatabaseManager alloc] init]; } );
    return theSharedInstance;
}

@end
