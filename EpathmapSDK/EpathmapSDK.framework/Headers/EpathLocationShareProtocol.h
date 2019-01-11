//
//  EpathLocationShareProtocol.h
//  EpathmapSDK
//
//  Created by zhangty on 2017/9/13.
//  Copyright © 2017年 Epathmap. All rights reserved.
//

#ifndef EpathLocationShareProtocol_h
#define EpathLocationShareProtocol_h

#import <Foundation/Foundation.h>
#import "EpathShareConfig.h"

@protocol EpathLocationShareProtocol <NSObject>
@required

- (void)EpathLocationShare:(EpathShareType)type title:(NSString *)title desc:(NSString *)desc url:(NSString *)url thumbImage:(UIImage *)image;



@end


#endif /* EpathLocationShareProtocol_h */
