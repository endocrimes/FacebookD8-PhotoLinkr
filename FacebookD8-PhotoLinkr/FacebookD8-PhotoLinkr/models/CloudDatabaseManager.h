//
//  CloudDatabaseManager.h
//  FacebookD8-PhotoLinkr
//
//  Created by Ivan Andriollo on 17/06/2014.
//  Copyright (c) 2014 PL. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Photo;

@interface CloudDatabaseManager : NSObject

+ (CloudDatabaseManager *)sharedInstance;

- (void)submitPhoto:(NSData *)photoData
     withCompletion:(void(^)(NSError *error))completion;

- (void)postComment:(NSString *)comment
           forPhoto:(Photo *)photo
     withCompletion:(void(^)(NSError *error))completion;

- (void)fetchCommentsForPhoto:(Photo *)photo
               withCompletion:(void(^)(NSArray *comments ,NSError *error))completion;

- (void)fetchPhotosWithCompletion:(void(^)(NSArray *comments ,NSError *error))completion;

@end
