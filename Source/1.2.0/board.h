/* Copyright 2017 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/* Fingerprint microcontroller configuration */

#ifndef __CROS_EC_BOARD_H
#define __CROS_EC_BOARD_H

#define CONFIG_SYSTEM_UNLOCKED

/* Serial console */


/* Optional features */

#define CONFIG_STM_HWTIMER32



/* Timer selection */
#define TIM_CLOCK32     2
#define TIM_WATCHDOG   16

/*
 * PLL configuration for 80Mhz:
 * SYSCLK = HSE * n/m/r = 16 * 10 / 2 = 80 Mhz
 */
#undef STM32_PLLM
#define STM32_PLLM	1
#undef STM32_PLLN
#define STM32_PLLN	10
#undef STM32_PLLR
#define STM32_PLLR	2

#ifndef __ASSEMBLER__

#include "gpio_signal.h"


#endif /* !__ASSEMBLER__ */
#endif /* __CROS_EC_BOARD_H */
