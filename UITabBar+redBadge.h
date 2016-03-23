//
//  UITabBar+redBadge.h
//  meishibusiness
//
//  Created by team on 16/3/21.
//  Copyright © 2016年 EveTime. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBar (redBadge)

- (void)showBadgeOnItemIndex:(int)index; //显示小红点
- (void)hideBadgeOnItemIndex:(int)index; //隐藏小红点

@end
