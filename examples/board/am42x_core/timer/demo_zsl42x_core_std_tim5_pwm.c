/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief ADTIM5 ��ʱ�� PWM ���̣�ͨ����׼�ӿ�ʵ��
 *
 * - ʵ������
 *   1. PIOA_3(TIM5_CHA)��� 2KHz �� PWM��ռ�ձ�Ϊ 50%��
 *
 * \par Դ����
 * \snippet demo_zsl42x_std_tim5_pwm.c src_zsl42x_std_tim5_pwm
 *
 * \internal
 * \par Modification history
 * - 1.00 19-10-10  zp, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_zsl42x_std_tim5_pwm
 * \copydoc demo_zsl42x_std_tim5_pwm.c
 */

/** [src_zsl42x_std_tim5_pwm] */

#include "ametal.h"
#include "am_vdebug.h"
#include "am_zsl42x_inst_init.h"
#include "demo_std_entries.h"
#include "demo_am42x_core_entries.h"

/**
 * \brief �������
 */
void demo_zsl42x_core_std_tim5_pwm_entry (void)
{

    AM_DBG_INFO("demo am42x_core std tim5 pwm!\r\n");

    demo_std_timer_pwm_entry(am_zsl42x_tim5_pwm_inst_init(), 0);
}
/** [src_zsl42x_std_tim5_pwm] */

/* end of file */