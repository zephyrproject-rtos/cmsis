# Copyright (c) 2021 Stephanos Ioannidis <root@stephanos.io>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_bilinear_interp_f32.c
  arm_bilinear_interp_q15.c
  arm_bilinear_interp_q31.c
  arm_bilinear_interp_q7.c
  arm_linear_interp_f32.c
  arm_linear_interp_q15.c
  arm_linear_interp_q31.c
  arm_linear_interp_q7.c
  arm_spline_interp_f32.c
  arm_spline_interp_init_f32.c
  )

zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_FLOAT16
  arm_bilinear_interp_f16.c
  arm_linear_interp_f16.c
  )
