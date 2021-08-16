# Copyright (c) 2021 Stephanos Ioannidis <root@stephanos.io>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

zephyr_library_sources(
  arm_common_tables.c
  arm_common_tables_f16.c
  arm_const_structs.c
  arm_const_structs_f16.c
  arm_mve_tables.c
  arm_mve_tables_f16.c
  )
