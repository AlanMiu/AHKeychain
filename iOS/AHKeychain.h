//
//  AHKeychain.h
//  AHKit
//
//  Created by Alan Miu on 15/10/29.
//  Copyright (c) 2015年 AutoHome. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AHKeychain : NSObject

@property (nonatomic, readonly) BOOL isSupportGroup;

- (id)initWithIdentifier:(NSString *)identifier;
- (id)initWithIdentifier:(NSString *)identifier accessGroup:(NSString *)accessGroup;

/**
 *  读取数据
 *
 *  @return 数据 或 空
 */
- (id)load;

/**
 *  保存数据
 *
 *  @param object 支持序列化的对象
 *
 *  @return 是否成功
 */
- (BOOL)save:(id)object;

/**
 *  删除数据
 *
 *  @return 是否成功
 */
- (BOOL)remov;

@end
