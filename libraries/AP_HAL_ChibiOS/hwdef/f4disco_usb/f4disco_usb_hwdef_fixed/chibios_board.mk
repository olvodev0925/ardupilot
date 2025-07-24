BOARD_DIR := $(dir $(lastword $(MAKEFILE_LIST)))

BOARDFILES = $(BOARD_DIR)/board.c

include $(CHIBIOS)/os/hal/ports/STM32/STM32F4xx/platform.mk
