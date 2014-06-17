//
//  CloudDatabaseManager.m
//  FacebookD8-PhotoLinkr
//
//  Created by Ivan Andriollo on 17/06/2014.
//  Copyright (c) 2014 PL. All rights reserved.
//

#import "CloudDatabaseManager.h"
#import "Photo.h"
#import "Comment.h"
#import <CloudKit/CloudKit.h>

@interface CloudDatabaseManager ()
{
    CKDatabase *_cloudKitPublicDatabase;
}
@end

@implementation CloudDatabaseManager

+ (CloudDatabaseManager *)sharedInstance
{
    static dispatch_once_t predicate;
    static CloudDatabaseManager *theSharedInstance = nil;
    
    dispatch_once( &predicate, ^{ theSharedInstance = [[CloudDatabaseManager alloc] init]; } );
    return theSharedInstance;
}

- (instancetype)init
{
    self = [super init];
    if (self)
    {
        [self setupCloudKit];
    }
    return self;
}

- (void)setupCloudKit
{
    _cloudKitPublicDatabase = [[CKContainer defaultContainer] publicCloudDatabase];
}

#pragma mark - Public Methods -

- (void)submitPhoto:(NSData *)photoData
     withCompletion:(void(^)(NSError *error))completion
{
    
}

- (void)postComment:(NSString *)comment
           forPhoto:(Photo *)photo
     withCompletion:(void(^)(NSError *error))completion
{
    
}

- (void)fetchCommentsForPhoto:(Photo *)photo
               withCompletion:(void(^)(NSArray *comments ,NSError *error))completion
{
    
}

- (void)fetchPhotosWithCompletion:(void(^)(NSArray *comments ,NSError *error))completion
{
    
}

@end
