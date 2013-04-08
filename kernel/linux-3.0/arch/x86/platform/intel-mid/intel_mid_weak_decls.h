/*
 * intel_mid_weak_decls.h: Weak declarations of intel-mid.c
 *
 * (C) Copyright 2012 Intel Corporation
 * Author:
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2
 * of the License.
 */


/* __attribute__((weak)) makes these declarations overridable */
extern struct devs_id __initconst device_ids[] __attribute__((weak));
extern void intel_mid_power_off(void) __attribute__((weak));
extern unsigned long __init intel_mid_calibrate_tsc(void) __attribute__((weak));
