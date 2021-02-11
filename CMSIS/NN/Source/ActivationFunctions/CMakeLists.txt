# Copyright (c) 2020 Silvano Cortesi <cortesis@student.ethz.ch>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_nn_activations_q15.c
  arm_nn_activations_q7.c
  arm_relu6_s8.c
  arm_relu_q15.c
  arm_relu_q7.c
  )
