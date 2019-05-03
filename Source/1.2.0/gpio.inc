/*
 * Copyright 2017 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/* Declare symbolic names for all the GPIOs that we care about.
 * Note: Those with interrupt handlers must be declared first. */




/* Outputs */

GPIO(TST,   PIN(B, 3), GPIO_OUT_HIGH)


/* Unimplemented signals which we need to emulate */
UNIMPLEMENTED(ENTERING_RW)
UNIMPLEMENTED(WP_L)
UNIMPLEMENTED(LID_OPEN)


