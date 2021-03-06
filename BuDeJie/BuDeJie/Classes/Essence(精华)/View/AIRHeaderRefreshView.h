//
//  AIRDownRefreshView.h
//  BuDeJie
//
//  Created by air on 17/5/6.
//  Copyright © 2017年 air. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface AIRHeaderRefreshView : UIView
/******************** 是否在刷新 *******************/
@property (nonatomic, assign, getter=isHeaderRefreshing)BOOL headerRefreshing;
@property (weak, nonatomic) IBOutlet UIView *backgroudView;
@property (weak, nonatomic) IBOutlet UILabel *refreshLabel;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *netActivityIndicator;

+ (instancetype)downRefreshView;
@end
