# Copyright (c) 2020 Silvano Cortesi <cortesis@student.ethz.ch>
# SPDX-License-Identifier: Apache-2.0

zephyr_include_directories(Include)

add_subdirectory(Source)

# Disable strict aliasing rules to avoid '*__SIMD32(pDst)++' build errors
zephyr_compile_options(-fno-strict-aliasing)
