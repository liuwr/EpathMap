//
//  EpathShareConfig.h
//  EpathmapSDK
//
//  Created by zhangty on 2017/9/12.
//  Copyright © 2017年 Epathmap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, EpathShareType) {
    EpathShareTypeUnkown,
    EpathShareTypeWeChat, //微信
    EpathShareTypeQQ,     //QQ
    EpathShareTypeSMS,    //短信
    EpathShareTypeCopy,   //复制
};

@interface EpathShareConfig : NSObject

@property (nonatomic, copy)NSString *scheme;
@property (nonatomic, strong)UIImage *imageIcon;
@property (nonatomic, readonly)NSArray *supportPlatforms;

+ (instancetype)sharedInstance;

+ (void)showSharePlatforms:(NSArray *)showPlatforms;

+ (void)sendShare:(EpathShareType)type title:(NSString *)title desc:(NSString *)desc url:(NSString *)url;

@end
