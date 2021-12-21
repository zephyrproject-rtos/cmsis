# Copyright (c) 2021, Commonwealth Scientific and Industrial Research
# Organisation (CSIRO) ABN 41 687 119 230.
# SPDX-License-Identifier: Apache-2.0

add_subdirectory_ifdef(CONFIG_CMSIS_NN_ACTIVATION         ActivationFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_BASICMATH          BasicMathFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_CONCATENATION      ConcatenationFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_CONVOLUTION        ConvolutionFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_FULLYCONNECTED     FullyConnectedFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_NNSUPPORT          NNSupportFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_POOLING            PoolingFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_RESHAPE            ReshapeFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_SOFTMAX            SoftmaxFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_SVD                SVDFunctions)
