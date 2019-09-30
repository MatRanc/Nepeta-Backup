//
//  iDownloadBlogFeedItem.h
//  iDownloadBlog
//
//  Created by Matt Clarke on 13/03/2015.
//
//

#import <Foundation/Foundation.h>

@interface iDownloadBlogFeedItem : NSObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *imageUrl;

@end
