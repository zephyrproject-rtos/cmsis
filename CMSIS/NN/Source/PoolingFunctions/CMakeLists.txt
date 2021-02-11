# Copyright (c) 2020 Silvano Cortesi <cortesis@student.ethz.ch>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_avgpool_s8.c
  arm_max_pool_s8.c
  arm_max_pool_s8_opt.c
  arm_pool_q7_HWC.c
  )
