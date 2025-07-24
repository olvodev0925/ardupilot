#pragma once

// -----------------------------------------------------------------------------
// STM32F411 MCU Configuration for ChibiOS with USB 48 MHz clock
// -----------------------------------------------------------------------------

#define STM32F411xx
#define STM32_HSECLK                8000000   // 8 MHz external crystal
#define STM32_LSECLK                0

// --- PLL Configuration: 8 MHz HSE → PLL_N = 192, PLL_Q = 4 ⇒ 48 MHz for USB ---
#define STM32_PLLSRC                STM32_PLLSRC_HSE
#define STM32_PLLM                  8
#define STM32_PLLN                  192
#define STM32_PLLP                  2         // SYSCLK = 192 / 2 = 96 MHz
#define STM32_PLLQ                  4         // 192 / 4 = 48 MHz for USB
#define STM32_PLLR                  2

// --- Bus dividers ---
#define STM32_HPRE                  STM32_HPRE_DIV1      // AHB = 96 MHz
#define STM32_PPRE1                 STM32_PPRE1_DIV2     // APB1 = 48 MHz
#define STM32_PPRE2                 STM32_PPRE2_DIV1     // APB2 = 96 MHz

// --- MCO and RTC ---
#define STM32_MCO1SEL               STM32_MCO1SEL_HSI
#define STM32_MCO1PRE               STM32_MCO1PRE_DIV1
#define STM32_MCO2PRE               STM32_MCO2PRE_DIV1
#define STM32_MCO2SEL               STM32_MCO2SEL_SYSCLK
#define STM32_RTCSEL                STM32_RTCSEL_LSI

// --- Power and Backup ---
#define STM32_PVD_ENABLE            FALSE
#define STM32_PLS                   STM32_PLS_LEV0
#define STM32_BKPRAM_ENABLE         FALSE

// -----------------------------------------------------------------------------
// Peripherals Configuration
// -----------------------------------------------------------------------------

// --- ADC ---
#define STM32_ADC_ADCPRE            STM32_ADC_ADCPRE_DIV4
#define STM32_ADC_USE_ADC1          TRUE

// --- CAN ---
#define STM32_CAN_USE_CAN1          FALSE
#define STM32_CAN_USE_CAN2          FALSE

// --- USART ---
#define STM32_SERIAL_USE_USART1     TRUE
#define STM32_SERIAL_USE_USART2     FALSE
#define STM32_SERIAL_USE_USART6     FALSE

// --- USB (Device mode, Full-Speed) ---
#define STM32_USB_USE_OTG1          TRUE
#define STM32_USB_OTG1_IRQ_PRIORITY 14
#define STM32_USB_OTG1_RX_FIFO_SIZE 512

// --- I2C ---
#define STM32_I2C_USE_I2C1          TRUE
#define STM32_I2C_USE_I2C2          FALSE

// --- SPI ---
#define STM32_SPI_USE_SPI1          TRUE
#define STM32_SPI_USE_SPI2          FALSE
#define STM32_SPI_USE_SPI3          FALSE

// -----------------------------------------------------------------------------
// DMA Mapping (must match hwdef.dat)
// -----------------------------------------------------------------------------

#define STM32_ADC_ADC1_DMA_STREAM          STM32_DMA_STREAM_ID(2, 4)
#define STM32_ADC_ADC1_DMA_PRIORITY        2

#define STM32_USART1_RX_DMA_STREAM         STM32_DMA_STREAM_ID(2, 2)
#define STM32_USART1_TX_DMA_STREAM         STM32_DMA_STREAM_ID(2, 7)

#define STM32_SPI1_RX_DMA_STREAM           STM32_DMA_STREAM_ID(2, 0)
#define STM32_SPI1_TX_DMA_STREAM           STM32_DMA_STREAM_ID(2, 3)

