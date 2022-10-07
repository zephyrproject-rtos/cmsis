# Copyright (c) 2020 Stephanos Ioannidis <root@stephanos.io>
# SPDX-License-Identifier: Apache-2.0

zephyr_include_directories(Include)

if(CONFIG_ARMV8_1_M_MVEF OR CONFIG_CMSIS_DSP_SUPPORT)
  include_directories(PrivateInclude)
endif()

add_subdirectory(Source)

zephyr_compile_definitions_ifndef(CONFIG_ARM __GNUC_PYTHON__)
