# Copyright (c) 2021 Stephanos Ioannidis <root@stephanos.io>
# SPDX-License-Identifier: Apache-2.0

zephyr_library()

file(GLOB SRCF64 "./*_f64.c")
file(GLOB SRCF32 "./*_f32.c")
file(GLOB SRCF16 "./*_f16.c")
file(GLOB SRCQ31 "./*_q31.c")
file(GLOB SRCQ15 "./*_q15.c")
file(GLOB SRCQ7  "./*_q7.c")

file(GLOB SRCU32 "./*_u32.c")
file(GLOB SRCU16 "./*_u16.c")
file(GLOB SRCU8  "./*_u8.c")

zephyr_library_sources(
  	${SRCF32}
	${SRCQ31}
	${SRCQ15}
	${SRCQ7}
	${SRCU32}
	${SRCQ16}
	${SRCQ8}
  )

zephyr_library_sources_ifdef(CONFIG_CMSIS_DSP_FLOAT16
  ${SRCF16}
  )
