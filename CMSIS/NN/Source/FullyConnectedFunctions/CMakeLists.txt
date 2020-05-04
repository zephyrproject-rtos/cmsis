# Copyright (c) 2020 Silvano Cortesi <cortesis@student.ethz.ch>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_fully_connected_mat_q7_vec_q15.c
  arm_fully_connected_mat_q7_vec_q15_opt.c
  arm_fully_connected_q15.c
  arm_fully_connected_q15_opt.c
  arm_fully_connected_q7.c
  arm_fully_connected_q7_opt.c
  arm_fully_connected_s8.c
  )
