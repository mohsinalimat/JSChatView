//
//  JSChatViewManager.h
//  TestCom
//
//  Created by Song Lanlan on 7/2/15.
//  Copyright (c) 2015 cmge. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "JSMessageContentHandler.h"

@interface JSChatViewManager : NSObject

@property(nonatomic,readonly) UIView *chatView;

- (instancetype)initWithTableView:(UITableView*)tableView;

- (void)registerContentHandler:(Class)handlerClass;

-(JSMessageContentHandler*)handlerForMessage:(JSChatMessage*)message;

@end
