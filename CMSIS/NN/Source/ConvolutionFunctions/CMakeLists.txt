# Copyright (c) 2020 Silvano Cortesi <cortesis@student.ethz.ch>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_convolve_1x1_HWC_q7_fast_nonsquare.c
  arm_convolve_1x1_s8_fast.c
  arm_convolve_1_x_n_s8.c
  arm_convolve_HWC_q15_basic.c
  arm_convolve_HWC_q15_fast.c
  arm_convolve_HWC_q15_fast_nonsquare.c
  arm_convolve_HWC_q7_basic.c
  arm_convolve_HWC_q7_basic_nonsquare.c
  arm_convolve_HWC_q7_fast.c
  arm_convolve_HWC_q7_fast_nonsquare.c
  arm_convolve_HWC_q7_RGB.c
  arm_convolve_s8.c
  arm_depthwise_conv_3x3_s8.c
  arm_depthwise_conv_s8.c
  arm_depthwise_conv_s8_opt.c
  arm_depthwise_conv_u8_basic_ver1.c
  arm_depthwise_separable_conv_HWC_q7.c
  arm_depthwise_separable_conv_HWC_q7_nonsquare.c
  arm_nn_depthwise_conv_s8_core.c
  arm_nn_mat_mult_kernel_q7_q15.c
  arm_nn_mat_mult_kernel_q7_q15_reordered.c
  arm_nn_mat_mult_kernel_s8_s16.c
  arm_nn_mat_mult_kernel_s8_s16_reordered.c
  arm_nn_mat_mult_s8.c
  )
