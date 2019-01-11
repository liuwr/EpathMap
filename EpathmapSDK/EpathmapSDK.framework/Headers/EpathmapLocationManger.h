//
//  EpathmapLocationManger.h
//  EpathmapSDK
//
//  Created by zhangty on 2017/5/18.
//  Copyright © 2017年 Epathmap. All rights reserved.
//

#import <Foundation/Foundation.h>
@class EpathmapLocationManger;
@class EpathLocationInfo;
@protocol EpathmapLocationDelegate <NSObject>

- (void)EpathmapLocationManager:(EpathmapLocationManger *_Nullable)manager didUpdateLocation:(EpathLocationInfo *_Nullable)location;

@end

@interface EpathmapLocationManger : NSObject

@property (nonatomic, weak, nullable)id<EpathmapLocationDelegate> delegate;

@property (nonatomic, assign)NSUInteger locationTimeOut;


- (void)startLocationEngine:(nonnull NSString *)mapId;

- (void)stopLocatingEngine;

@end
