//
//  StandardDefine.h
//  hyb_patient
//
//  Created by hyb011 on 15/10/26.
//  Copyright © 2015年 hyb011. All rights reserved.
//
#define DEVICE_W [Tools getScreenWidth]
#define DEVICE_H [Tools getScreenHeight]
#define kNavBarHeight  64
#define MessageKeyBoardHeight  44
#define BOTTOM   93
#define kPregnantPhaseTopHeight 333

//操作月经
#define ONE_DAY_TIME (24 * 60 * 60)
#define EDIT_DAYS  14
#define TIME    1.5f
//大姨妈走了和可操作下次月经来了之间波动的天数
#define WAVE_DAYS  5

#define IOS_7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0f)
#define BOUNDS [UIScreen mainScreen].bounds.size
#define PLUS ([UIScreen mainScreen].bounds.size.width > 376)

#define HybRandomColor [UIColor colorWithRed:(arc4random_uniform(256))/255.0 green:(arc4random_uniform(256))/255.0 blue:(arc4random_uniform(256))/255.0 alpha:1.0]

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

//网络请求超时时间
#define HybRequestNetworkTimeOutInterval 10.0f

//距边宽度
#define hybEdgeSpaceWidth   -12

/////////////////////////////////////////颜色///////////////////////////////////////////////////////
#define BaseColorOld        UIColorFromRGB(0xff6688)
//小面积使用,用于特别需要强调和突出文字、按钮和icon
#define BaseColorNew        UIColorFromRGB(0xff7788)
#define BaseColorLight      UIColorFromRGB(0xFF99AF)
//用于重要级文字信息、内页标题信息
#define BaseMainTitleColorNew   UIColorFromRGB(0x444141) //3333333
//用于普通级段落信息、引导词
#define BaseNormalTextColorNew   UIColorFromRGB(0x72706E) //666666
//用于辅助、次要的文字信息
#define BaseSecondTextColorNew   UIColorFromRGB(0xA3A09B) //999999
//用于辅助、次要的文字信息、普通按钮描边
#define BaseSecondTextBorderColorNew   UIColorFromRGB(0xBAB7B5) //bbbbbb
//用于列表分割线(常用)

#define BaseSeparateNormalColorNew   UIColorFromRGB(0xEDE7E4) //eeeeee
//背景色
#define BaseBackgroundColorNew   UIColorFromRGB(0xF5F3F0) //f2f2f0
//用于加深分割线
#define BaseSeparateDarkColorNew   UIColorFromRGB(0xdddddd)

//头尾工具栏背景色
#define BaseToolBarColorNew   UIColorFromRGB(0xf6f6f6)
//孕期日记文字
#define BaseDiaryColorNew   UIColorFromRGB(0x7a696f)
/////////////////////////////////////////临时颜色///////////////////////////////////////////////////////
#define BaseYelloBgColor [UIColor colorWithRed:252.0/255 green:170.0/255 blue:70.0/255 alpha:1.0f]
//孕期日记文字
#define FontDiaryTitle [UIFont systemFontOfSize:24]
//论坛详情标题
#define FontForumHeaderTitle [UIFont systemFontOfSize:20]
/////////////////////////////////////////字体///////////////////////////////////////////////////////
//用在少数重要标题
#define FontImportantMinorityTitle [UIFont systemFontOfSize:18]
//用在一些较为重要的文字或操作按钮
#define FontImportantTitleAndButton [UIFont systemFontOfSize:16]
//正文、文章、圈子
#define FontNormalDetailText [UIFont systemFontOfSize:15]
//用于大多数文字(常用)
#define FontNormalText [UIFont systemFontOfSize:14]
//用于大多数文字
#define FontNormalMinorityText [UIFont systemFontOfSize:13]
//用于辅助性文字(常用)
#define FontNormalSecondText [UIFont systemFontOfSize:12]
//用于辅助性文字
#define FontNormalSecondMinorityText [UIFont systemFontOfSize:11]

//用在少数重要标题
#define FontImportantMinorityTitle_float 18
//用在一些较为重要的文字或操作按钮
#define FontImportantTitleAndButton_float 16
//用于大多数文字(常用)
#define FontNormalText_float 14
//用于大多数文字
#define FontNormalMinorityText_float 13
//用于辅助性文字(常用)
#define FontNormalSecondText_float 12
//用于辅助性文字
#define FontNormalSecondMinorityText_float 11

//文字行间距
#define TextLineSpace 8

//图片大小
#define hybAvatarImageSize          @"@!article-header"   //160w
#define hybListImageSize            @"@!group-list"       //200w
#define hybFourHundredImageSize     @"@!four-hundred"     //400w
#define hybEightHundredImageSize    @"@!eight-hundred"    //800w
#define hybOneKImageSize            @"@!normal-img"       //1024w
#define hybAllScreenImageSize       @"@!all-screen"       //全屏


/*
 * 百度语音识别
 */
#define BaiduYuYinAPIKEY  @"wedic0xxvNEfuFpItcsjE3uy"
#define BaiduYuYinSecretKey  @"kvUmqsAlbB8HcbtPb1j9QPtv6C4WHo9i"


typedef enum : NSInteger {
    CollectionViewTypeCheck,//多选
    CollectionViewTypeText,//输入文本【有单位】
    CollectionViewTypeSelect,//单选
    CollectionViewTypeScroll
} CollectionViewType;
