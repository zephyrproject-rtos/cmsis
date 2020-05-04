# Copyright (c) 2020 Silvano Cortesi <cortesis@student.ethz.ch>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_nn_accumulate_q7_to_q15.c
  arm_nn_add_q7.c
  arm_nn_depthwise_conv_nt_t_padded_s8.c
  arm_nn_depthwise_conv_nt_t_s8.c
  arm_nn_mat_mul_core_1x_s8.c
  arm_nn_mat_mul_core_4x_s8.c
  arm_nn_mat_mult_nt_t_s8.c
  arm_nn_mult_q15.c
  arm_nn_mult_q7.c
  arm_nntables.c
  arm_nn_vec_mat_mult_t_s8.c
  arm_q7_to_q15_no_shift.c
  arm_q7_to_q15_reordered_no_shift.c
  arm_q7_to_q15_reordered_with_offset.c
  arm_q7_to_q15_with_offset.c
  )
