# Copyright (c) 2021 Stephanos Ioannidis <root@stephanos.io>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_quaternion_conjugate_f32.c
  arm_quaternion_inverse_f32.c
  arm_quaternion_norm_f32.c
  arm_quaternion_normalize_f32.c
  arm_quaternion_product_f32.c
  arm_quaternion_product_single_f32.c
  arm_quaternion2rotation_f32.c
  arm_rotation2quaternion_f32.c
  )
