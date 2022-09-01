# Copyright (c) 2021 Stephanos Ioannidis <root@stephanos.io>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  FastMathFunctions.c
  arm_atan2_f32.c
  arm_atan2_q15.c
  arm_atan2_q31.c
  arm_cos_f32.c
  arm_cos_q15.c
  arm_cos_q31.c
  arm_divide_q15.c
  arm_divide_q31.c
  arm_sin_f32.c
  arm_sin_q15.c
  arm_sin_q31.c
  arm_sqrt_q15.c
  arm_sqrt_q31.c
  arm_vexp_f32.c
  arm_vexp_f64.c
  arm_vlog_f32.c
  arm_vlog_f64.c
  arm_vlog_q15.c
  arm_vlog_q32.c
  )

zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_FLOAT16
  FastMathFunctionsF16.c
  arm_atan2_f16.c
  arm_vexp_f16.c
  arm_vinverse_f16.c
  arm_vlog_f16.c
  )

zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_TABLES_ARM_COS_F32  arm_cos_f32.c)
zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_TABLES_ARM_COS_Q31  arm_cos_q31.c)
zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_TABLES_ARM_COS_Q15  arm_cos_q15.c)
zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_TABLES_ARM_SIN_F32  arm_sin_f32.c)
zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_TABLES_ARM_SIN_Q31  arm_sin_q31.c)
zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_TABLES_ARM_SIN_Q15  arm_sin_q15.c)
