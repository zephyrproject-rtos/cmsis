# Copyright (c) 2020 Silvano Cortesi <cortesis@student.ethz.ch>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_softmax_q15.c
  arm_softmax_q7.c
  arm_softmax_s8.c
  arm_softmax_u8.c
  arm_softmax_with_batch_q7.c
  )
