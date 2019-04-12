//
//  YQNumberSlideView.h
//  YQNumberSlideView_DEMO
//
//  Created by problemchild on 2017/5/13.
//  Copyright © 2017年 freakyyang. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol YQNumberSlideViewDelegate <NSObject>

- (void)YQSlideViewDidChangeIndex:(int)count;

- (void)YQSlideViewDidTouchIndex:(int)count;

@end


@interface YQNumberSlideView :UIView

#pragma mark -----------------------Function

/**
 *  刷新显示-如果有自定义样式，需要调用此方法
 */
- (void)show;

/**
 *  设置数量
 *
 *  @param count 数量
 */
- (void)setLableCount:(int)count;

/**
 *  设置显示的内容数组，不设置的话显示数字
 *
 *  @param arr 内容
 */
- (void)setShowArray:(NSArray *)arr;

/**
 *  手动跳转到下一个
 */
- (void)next;

/**
 *  手动跳转到前一个
 */
- (void)pre;

/**
 *  手动跳转
 */
- (void)scrollTo:(int)index;


#pragma mark -----------------------Property
/**
 *  代理
 */
@property(nonatomic,weak) id <YQNumberSlideViewDelegate> delegate;

/**
 *  每个显示的Lable的宽度,默认33,(宽度不够会导致字体变小)
 */
@property CGFloat lableWidth;

/**
 *  每个显示的Lable的间隔，默认20
 */
@property CGFloat lableMid;

/**
 *  选中的Lable的高度,默认25
 */
@property CGFloat maxHeight;

/**
 *  未选中的Lable的高度，默认15
 */
@property CGFloat minHeight;

/**
 *  lbale的颜色，默认黑色
 */
@property (nonatomic,strong)UIColor *LabColor;

/**
 *  二级Lable透明度，默认0.6
 */
@property CGFloat SecLevelAlpha;

/**
 *  三级Lable透明度，默认0.2
 */
@property CGFloat ThirdLevelAlpha;

/**
 *  焦点变色模式（beta）
 *
 *  @param mr 焦点红 0~1
 *  @param mg 焦点绿 0~1
 *  @param mb 焦点蓝 0~1
 *  @param sr 非焦点红 0~1
 *  @param sg 非焦点绿 0~1
 *  @param sb 非焦点蓝 0~1
 */
- (void)DiffrentColorModeWithMainColorR:(float)mr G:(float)mg B:(float)mb
                             SecColorR:(float)sr G:(float)sg B:(float)sb;


@end
