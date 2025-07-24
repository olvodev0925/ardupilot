BOARD_DIR := $(dir $(lastword $(MAKEFILE_LIST)))

BOARDFILES = $(BOARD_DIR)/board.c

include $(CHIBIOS)/os/hal/ports/STM32/STM32F4xx/platform.mk

pass:
	@echo "pass"

include_dirs:
	@mkdir -p $(BUILDROOT)/modules/ChibiOS/include_dirs
	@touch $(BUILDROOT)/modules/ChibiOS/include_dirs/.done




