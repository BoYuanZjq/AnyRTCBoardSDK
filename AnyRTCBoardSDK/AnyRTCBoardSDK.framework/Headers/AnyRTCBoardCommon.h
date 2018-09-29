//
//  AnyRTCBoardCommon.h
//  ARWriteBoard
//
//  Created by zjq on 2018/9/28.
//  Copyright © 2018年 zjq. All rights reserved.
//

#ifndef AnyRTCBoardCommon_h
#define AnyRTCBoardCommon_h
#import <Foundation/Foundation.h>

//错误码
typedef NS_ENUM(NSInteger,AnyRTCBoardCode) {
    
    AnyRTCBoardCodeParameterError = 3000,      //初始化错误
    AnyRTCBoardCodeNoNet = 3001,               //初始化无网络
    AnyRTCBoardCodeUserIdIsNull = 3002,        //用户ID为空
    AnyRTCBoardCodeSessionPastDue = 201,       //session过期
    AnyRTCBoardCodeDeveloperInfoError = 202,   //开发者信息错误
    AnyRTCBoardCodeDeveloperArrearage = 205,   //欠费
    AnyRTCBoardCodeDeveloperNotOpen = 206,     //用户未开通该功能
    AnyRTCBoardCodeDatabaseError = 301         //数据库异常
};

//白板工具类型
typedef NS_ENUM(NSInteger, AnyRTCBoardBrushModel) {
    AnyRTCBoardBrushModelNone = 0,         //无效果(触摸无响应)
    AnyRTCBoardBrushModelGraffiti,         //涂鸦
    AnyRTCBoardBrushModelArrow,            //单箭头
    AnyRTCBoardBrushModelLine,             //直线
    AnyRTCBoardBrushModelRect,             //矩形
    AnyRTCBoardBrushModelTransform,        //缩放(双指)/移动(单指)
};

@protocol AnyRTCBoardViewDelegate <NSObject>
@optional
- (void)initBoardScuess;
- (void)onBoardError:(AnyRTCBoardCode)nCode;
- (void)onBoardServerDisconnect;
- (void)onBoardPageChange:(NSString*)imageUrl withCurrentPage:(int)currentPage withTotalPage:(int)totalPage;
- (void)onBoardDestory;

@end

#endif /* AnyRTCBoardCommon_h */
