//
//  AIRTabBarModel.h
//  BuDeJie
//
//  Created by air on 佛历2560-3-31.
//  Copyright © 佛历2560年 air. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIRTabBarModel : NSObject
/********************** 控制器对象数组 *********************/

/** 类对象数组 */
@property (nonatomic,strong,readonly)NSArray *classArray;
/** 控制器数组 */
@property (nonatomic,strong,readonly)NSArray *controllerArray;
/** 导航控制器数组 */
@property (nonatomic,strong,readonly)NSArray *naviArray;

/********************* tabBar模型数据 ********************/
/** tabBarItem名称数组 */

//只读不生成实例变量，要合成:@synthesize stringItemArr = _stringItemArr;
@property (nonatomic,strong,readonly)NSArray <NSString *>*stringItemArr;
/** tabBarItem图片名数组 */
@property (nonatomic,strong,readonly)NSArray  <NSString *>*picItemArray;
/** tabBarItem选中图片名数组 */
@property (nonatomic,strong,readonly)NSArray  <NSString *>*selectedPicItemArr;
@end
