# Copyright (c) 2021, Commonwealth Scientific and Industrial Research
# Organisation (CSIRO) ABN 41 687 119 230.
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_convolve_1_x_n_s8.c
  arm_convolve_1x1_s8_fast.c
  arm_convolve_s8.c
  arm_convolve_wrapper_s8.c
  arm_depthwise_conv_3x3_s8.c
  arm_depthwise_conv_s8.c
  arm_depthwise_conv_s8_opt.c
  arm_depthwise_conv_wrapper_s8.c
  arm_nn_depthwise_conv_s8_core.c
  arm_nn_mat_mult_kernel_s8_s16.c
  arm_nn_mat_mult_kernel_s8_s16_reordered.c
  arm_nn_mat_mult_s8.c
)
