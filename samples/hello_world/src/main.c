/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>

#define SLEEP_TIME_MS   1000

int main(void)
{
    while(1) {
        printk("Hello World! %s\n", CONFIG_BOARD);
        k_msleep(SLEEP_TIME_MS);
    }
	return 0;
}
