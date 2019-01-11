//
//  EpathAlertView.h
//  EpathmapSDK
//
//  Created by zhangty on 2017/7/14.
//  Copyright © 2017年 Epathmap. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^EpathAlertViewCompletion)(NSUInteger selectedOtherButtonIndex);

@interface EpathAlertView : NSObject

+ (void)showAlertWithTitle:(NSString *)title
                   message:(NSString *)message
         cancelButtonTitle:(NSString *)cancelButtonTitle
         otherButtonTitles:(NSArray *)otherButtonTitles
                completion:(EpathAlertViewCompletion)completion NS_EXTENSION_UNAVAILABLE_IOS("");

+ (void)showNetworkNotReachable;

@end
