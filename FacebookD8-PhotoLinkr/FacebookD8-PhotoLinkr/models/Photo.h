//
//  Photo.h
//  FacebookD8-PhotoLinkr
//
//  Created by Ivan Andriollo on 17/06/2014.
//  Copyright (c) 2014 PL. All rights reserved.
//

@import UIKit;

@interface Photo : NSObject

@property (strong, nonatomic) NSData *photoData; //Binary photo data
@property (readonly, nonatomic) NSDate *dateAdded; //Date that the photo was submitted to iCloud
@property (strong, nonatomic) NSString *username; //The username that submitted the photo to iCloud
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSURL *url;


- (instancetype)initWithImage:(UIImage *)image
                     imageURL:(NSURL *)url
                     username:(NSString *)username;

@end
