# Copyright (c) 2021 Stephanos Ioannidis <root@stephanos.io>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_barycenter_f32.c
  arm_bitonic_sort_f32.c
  arm_bubble_sort_f32.c
  arm_copy_f32.c
  arm_copy_q15.c
  arm_copy_q31.c
  arm_copy_q7.c
  arm_fill_f32.c
  arm_fill_q15.c
  arm_fill_q31.c
  arm_fill_q7.c
  arm_float_to_q15.c
  arm_float_to_q31.c
  arm_float_to_q7.c
  arm_heap_sort_f32.c
  arm_insertion_sort_f32.c
  arm_merge_sort_f32.c
  arm_merge_sort_init_f32.c
  arm_q15_to_float.c
  arm_q15_to_q31.c
  arm_q15_to_q7.c
  arm_q31_to_float.c
  arm_q31_to_q15.c
  arm_q31_to_q7.c
  arm_q7_to_float.c
  arm_q7_to_q15.c
  arm_q7_to_q31.c
  arm_quick_sort_f32.c
  arm_selection_sort_f32.c
  arm_sort_f32.c
  arm_sort_init_f32.c
  arm_weighted_sum_f32.c
  )

zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_FLOAT16
  arm_barycenter_f16.c
  arm_copy_f16.c
  arm_f16_to_float.c
  arm_f16_to_q15.c
  arm_fill_f16.c
  arm_float_to_f16.c
  arm_q15_to_f16.c
  arm_weighted_sum_f16.c
  )
