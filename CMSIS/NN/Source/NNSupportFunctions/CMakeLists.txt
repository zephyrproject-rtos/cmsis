# Copyright (c) 2021, Commonwealth Scientific and Industrial Research
# Organisation (CSIRO) ABN 41 687 119 230.
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_nn_depthwise_conv_nt_t_padded_s8.c
  arm_nn_depthwise_conv_nt_t_s8.c
  arm_nn_mat_mul_core_1x_s8.c
  arm_nn_mat_mul_core_4x_s8.c
  arm_nn_mat_mult_nt_t_s8.c
  arm_nn_vec_mat_mult_t_s8.c
  arm_nn_vec_mat_mult_t_svdf_s8.c
  arm_q7_to_q15_with_offset.c
)
