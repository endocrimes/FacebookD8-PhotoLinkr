//
//  Comment.h
//  FacebookD8-PhotoLinkr
//
//  Created by Ivan Andriollo on 17/06/2014.
//  Copyright (c) 2014 PL. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Comment : NSObject

@property (strong, nonatomic) NSString *body; //The body of the comment
@property (strong, nonatomic) NSString *username; //The username that submitted the comment to iCloud

@end
