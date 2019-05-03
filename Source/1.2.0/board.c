/* Copyright 2017 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "common.h"
#include "console.h"
#include "gpio.h"
#include "hooks.h"
#include "system.h"
#include "task.h"
#include "registers.h"
#include "board_config.h"
#include "timer.h"


#define CPRINTS(format, args...) cprints(CC_SYSTEM, format, ## args)




#include "gpio_list.h"


void main_task(void){
    while(1){
    gpio_set_level(GPIO_TST, 1);
    sleep(1);
    gpio_set_level(GPIO_TST, 0);
    sleep(1);
    }
}


