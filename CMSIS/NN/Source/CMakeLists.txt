# Copyright (c) 2020 Silvano Cortesi <cortesis@student.ethz.ch>
# SPDX-License-Identifier: Apache-2.0

# CMSIS-NN Components
add_subdirectory_ifdef(CONFIG_CMSIS_NN_ACTIVATION     ActivationFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_BASICMATHS     BasicMathFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_CONCATENATION  ConcatenationFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_CONVOLUTION    ConvolutionFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_FULLYCONNECTED FullyConnectedFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_NNSUPPORT      NNSupportFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_POOLING        PoolingFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_RESHAPE        ReshapeFunctions)
add_subdirectory_ifdef(CONFIG_CMSIS_NN_SOFTMAX        SoftmaxFunctions)
