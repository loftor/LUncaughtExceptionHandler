//
//  LUncaughtExceptionHandler.h
//  Example
//
//  Created by zhanglei on 2017/5/2.
//  Copyright © 2017 loftor. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^LExceptionBlock)(NSException * exception, BOOL * finished);

@interface LUncaughtExceptionHandler : NSObject

@property (nonatomic, copy) LExceptionBlock exceptionBlock;

+ (instancetype)shareInstance;

@end

LUncaughtExceptionHandler* InstallUncaughtExceptionHandler(void);
