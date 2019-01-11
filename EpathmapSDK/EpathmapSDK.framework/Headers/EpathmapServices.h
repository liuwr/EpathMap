//
//  EpathmapServices.h
//  EpathmapSDK
//
//  Created by zhangty on 17/4/6.
//  Copyright © 2017年 Epathmap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EpathUserInfo.h"

//剪贴板内有位置共享口令
#define EpathReceiveShareInfoNotification     @"EpathNotificationReceiveShareInfo"

typedef void (^ EpathOpenURLResult)(BOOL isValid, NSDictionary * _Nullable params);


@protocol EpathmapServicesDelegate <NSObject>

//监听partner下的建筑物列表请求返回（一般有两次，缓存、网络）
- (void)responseBuildList:(NSArray *_Nullable)array error:(NSError *_Nullable)error;

@end

@class EpathAppInfo;
@interface EpathmapServices : NSObject {
    @private
    EpathAppInfo  *appInfo;
}
@property (nonatomic, weak)id<EpathmapServicesDelegate> _Nullable delegate;
@property (nonatomic, readonly)NSString * _Nullable appKey;
//验证Appkey的有效性
@property (nonatomic, assign)BOOL       isAppKeyValid;
//建筑物列表
@property (nonatomic, readonly)NSArray * _Nullable buildAry;
//用户信息
@property (nonatomic, strong)EpathUserInfo * _Nullable userInfo;

+ (nonnull instancetype)sharedInstance;

+ (void)setAppKey:(nonnull NSString *)appKey;
//分享用的scheme
+ (void)setScheme:(nonnull NSString *)scheme;

- (void)application:(UIApplication *_Nonnull)application didFinishLaunchingWithOptions:(NSDictionary *_Nullable)launchOptions;

- (void)applicationWillEnterForeground:(UIApplication *_Nonnull)application;
- (BOOL)application:(UIApplication *_Nonnull)application openURL:(NSURL *_Nonnull)url block:(EpathOpenURLResult _Nullable )block;
//位置共享功能需传入支持EpathLocationShareProtocol的delegate
- (BOOL)application:(UIApplication *_Nonnull)application openURL:(NSURL *_Nonnull)url delegate:(id _Nullable)delegate;

//请求对应的建筑物列表
- (void)requestPartnerBuildList;

- (NSInteger)hasPermissionWith:(nonnull NSString *)mapId;

+ (NSString *_Nullable)SDKVersion;

@end
