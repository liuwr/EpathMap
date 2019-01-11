//
//  EpathmapViewController.h
//  EpathmapSDK
//
//  Created by zhangty on 17/4/7.
//  Copyright © 2017年 Epathmap. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EpathLocationShareProtocol.h"
#import <SceneKit/SceneKit.h>
#import <ARKit/ARKit.h>
#import <CoreLocation/CoreLocation.h>


@class EpathBuilding;
@interface EpathMapViewController : UIViewController

- (nonnull instancetype)initWithMapId:(nonnull NSString *)mapId;

- (nonnull instancetype)initWithBuildInfo:(nonnull EpathBuilding *)building;

- (nonnull instancetype)initWithMapId:(nonnull NSString *)mapId targetName:(nonnull NSString *)targetName targetId:(nonnull NSString *)targetId;

@property (nonatomic, weak, nullable)id<EpathLocationShareProtocol> locationShareDelegate;

- (void)setShareMapId:(NSString *_Nullable)mapId groupId:(NSString *_Nullable)groupId;

- (void)setShareGroupNumber:(NSString *_Nullable)number params:(NSMutableDictionary *_Nullable)params;

- (void)setLocationShareInfo:(nonnull NSDictionary *)params;

@property (nonatomic, assign)BOOL isHiddenPickingCarBtn;
@property (nonatomic, assign)BOOL isHiddenARBtn;

@end
