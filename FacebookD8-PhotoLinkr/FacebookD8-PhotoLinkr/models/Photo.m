//
//  Photo.m
//  FacebookD8-PhotoLinkr
//
//  Created by Ivan Andriollo on 17/06/2014.
//  Copyright (c) 2014 PL. All rights reserved.
//

#import "Photo.h"

@interface Photo () {
    UIImage *_image;
}

@end

@implementation Photo

- (instancetype)initWithImage:(UIImage *)image username:(NSString *)username
{
    self = [super init];
    if (self) {
        _dateAdded = [NSDate date];
        _username = username;
        _photoData = UIImageJPEGRepresentation(image, 0.8);
    }
    
    return self;
}

- (UIImage *)image
{
    if (!_image) {
        _image = [UIImage imageWithData:self.photoData];
    }
    
    return _image;
}

@end
