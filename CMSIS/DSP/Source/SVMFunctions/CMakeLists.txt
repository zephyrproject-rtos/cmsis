# Copyright (c) 2021 Stephanos Ioannidis <root@stephanos.io>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_svm_linear_init_f32.c
  arm_svm_linear_predict_f32.c
  arm_svm_polynomial_init_f32.c
  arm_svm_polynomial_predict_f32.c
  arm_svm_rbf_init_f32.c
  arm_svm_rbf_predict_f32.c
  arm_svm_sigmoid_init_f32.c
  arm_svm_sigmoid_predict_f32.c
  )

zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_FLOAT16
  arm_svm_linear_init_f16.c
  arm_svm_linear_predict_f16.c
  arm_svm_polynomial_init_f16.c
  arm_svm_polynomial_predict_f16.c
  arm_svm_rbf_init_f16.c
  arm_svm_rbf_predict_f16.c
  arm_svm_sigmoid_init_f16.c
  arm_svm_sigmoid_predict_f16.c
  )
