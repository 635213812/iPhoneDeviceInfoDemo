//
//  DeviceUtils.h
//  iPhoneDeviceInfoDemo
//
//  Created by MacOS on 2019/6/6.
//  Copyright © 2019 MacOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeviceUtils : NSObject

/**
 *  获取当前设备的IMSI值
 */
+ (NSString *)getDeviceIMSIValue;

/**
 *  获取当前设备的IMEI值
 */
+ (NSString *)getDeviceIMEIValue;

/**
 *  获取当前设备的MacId值
 */
+ (NSString *)getDeviceMacIdValue;

/**
 *  获取当前设备的通讯运营商名称
 */
+ (NSString *)getDeviceCarrierName;

/**
 *  获取当前设备的网络通讯名称值
 */
+ (NSString *)getDeviceNetworkName;

/**
 *  获取当前设备的横向最大值
 */
+ (NSNumber *)getDeviceXMaxValue;

/**
 *  获取当前设备的纵向最大值
 */
+ (NSNumber *)getDeviceYMaxValue;

/**
 *  获取当前设备的横向分辨率值
 */
+ (NSNumber *)getDeviceXResolution;

/**
 *  获取当前设备的纵向分辨率值
 */
+ (NSNumber *)getDeviceYResolution;

/**
 *  获取当前设备的型号名称
 */
+ (NSString *)getDeviceModel;

/**
 *  获取当前设备的操作系统名称
 */
+ (NSString *)getDeviceOSName;

/**
 *  获取当前设备的操作系统版本号
 */
+ (NSString *)getDeviceOSVersion;

/// 屏幕宽度
+ (CGFloat)getDeviceScreenWidth;

/// 屏幕高度
+ (CGFloat)getDeviceScreenHeight;

/// 获取当前语言
+ (NSString *)getDeviceLanguage;

/// 获取电池当前的状态，共有4种状态
+ (NSString *) getBatteryState;

/// 获取总内存大小
+ (long long)getTotalMemorySize;

/// 获取当前可用内存
+ (long long)getAvailableMemorySize;

/// 获取电池电量
+ (CGFloat)getBatteryLevel;

/// 通用唯一识别码UUID
+ (NSString *)getUUID;

/// 获取当前设备IP
+ (NSString *)getDeviceIPAdress;

/// 获取iPhone名称
+ (NSString *)getiPhoneName;

/// 当前系统版本号
+ (NSString *)getSystemVersion;

@end

NS_ASSUME_NONNULL_END
