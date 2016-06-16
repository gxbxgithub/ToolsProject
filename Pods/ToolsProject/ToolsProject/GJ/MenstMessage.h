//
//  MenstMessage.h
//  hyb_patient
//
//  Created by hyb011 on 15/10/27.
//  Copyright © 2015年 hyb011. All rights reserved.
//


#import <Foundation/Foundation.h>

typedef NS_ENUM(int, PhaseType) {
    PhaseTypeJiuyi  = 2,  //治疗
    PhaseTypeShiguan = 3,
    PhaseTypeBeiyun = 4,
    PhaseTypeYunqi = 5
};

#define MENSTCYCLE_min 1
#define MENSTCYCLE_max 99
#define MENSTCYCLE_default 28
#define MENSTCYCLE_default_min 26
#define MENSTCYCLE_default_max 30

#define MENSTDAY_min 1
#define MENSTDAY_max 10
#define MENSTDAY_default 5
#define MENSTDAY_default_min 4
#define MENSTDAY_default_max 6

#define menst_day_count @"menst_day_count"
#define menst_day_min @"menst_day_count_min"
#define menst_day_max @"menst_day_count_max"
#define menst_day_regular @"menst_day_count_regular"

#define menst_cycle_days @"menst_cycle_days"
#define menst_cycle_regular @"menst_cycle_regular"
#define menst_cycle_max @"menst_cycle_max"
#define menst_cycle_min @"menst_cycle_min"

#define menst_last_date @"menst_last_date"
#define preg_pre_timespan @"preg_pre_timespan"
#define start_prepare_pregnancy @"start_prepare_pregnancy"
//#define menst_last_date @"menst_last_date"

#define menstrual_come_click @"menstrual_come_click"
#define menstrual_go_click @"menstrual_go_click"
#define cal_nowmensDays @"cal_nowmensDays"

#define shiguan_phase @"shiguan_phase2"
#define shiguan_phase_id @"shiguan_phase2_id"

#define yuchan_date_yuqi @"yucha_date_yuqi"