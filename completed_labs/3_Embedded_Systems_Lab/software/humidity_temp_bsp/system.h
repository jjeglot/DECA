/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys' in SOPC Builder design 'deca_top'
 * SOPC Builder design path: ../../deca_top.sopcinfo
 *
 * Generated: Fri May 08 18:36:36 EDT 2015
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x01480820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 80000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x19
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x01440020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 80000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x19
#define ALT_CPU_NAME "nios2_qsys"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x01440000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x01480820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 80000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x19
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x01440020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x19
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x01440000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_MODULAR_ADC
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_ONCHIP_FLASH
#define __ALTPLL
#define __I2C_OPENCORES
#define __TEMP_LM71CIMF


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x1481228
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x1481228
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x1481228
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "deca_top"


/*
 * TEMP_LM71CIMF configuration
 *
 */

#define ALT_MODULE_CLASS_TEMP_LM71CIMF TEMP_LM71CIMF
#define TEMP_LM71CIMF_BASE 0x60
#define TEMP_LM71CIMF_IRQ -1
#define TEMP_LM71CIMF_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TEMP_LM71CIMF_NAME "/dev/TEMP_LM71CIMF"
#define TEMP_LM71CIMF_SPAN 16
#define TEMP_LM71CIMF_TYPE "TEMP_LM71CIMF"


/*
 * adc_pll configuration
 *
 */

#define ADC_PLL_BASE 0x1481210
#define ADC_PLL_IRQ -1
#define ADC_PLL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ADC_PLL_NAME "/dev/adc_pll"
#define ADC_PLL_SPAN 16
#define ADC_PLL_TYPE "altpll"
#define ALT_MODULE_CLASS_adc_pll altpll


/*
 * cap_pb_pio configuration
 *
 */

#define ALT_MODULE_CLASS_cap_pb_pio altera_avalon_pio
#define CAP_PB_PIO_BASE 0x70
#define CAP_PB_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define CAP_PB_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CAP_PB_PIO_CAPTURE 0
#define CAP_PB_PIO_DATA_WIDTH 2
#define CAP_PB_PIO_DO_TEST_BENCH_WIRING 0
#define CAP_PB_PIO_DRIVEN_SIM_VALUE 0
#define CAP_PB_PIO_EDGE_TYPE "NONE"
#define CAP_PB_PIO_FREQ 40000000
#define CAP_PB_PIO_HAS_IN 0
#define CAP_PB_PIO_HAS_OUT 1
#define CAP_PB_PIO_HAS_TRI 0
#define CAP_PB_PIO_IRQ -1
#define CAP_PB_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CAP_PB_PIO_IRQ_TYPE "NONE"
#define CAP_PB_PIO_NAME "/dev/cap_pb_pio"
#define CAP_PB_PIO_RESET_VALUE 0
#define CAP_PB_PIO_SPAN 16
#define CAP_PB_PIO_TYPE "altera_avalon_pio"


/*
 * capsense_i2c configuration
 *
 */

#define ALT_MODULE_CLASS_capsense_i2c i2c_opencores
#define CAPSENSE_I2C_BASE 0x20
#define CAPSENSE_I2C_IRQ 5
#define CAPSENSE_I2C_IRQ_INTERRUPT_CONTROLLER_ID 0
#define CAPSENSE_I2C_NAME "/dev/capsense_i2c"
#define CAPSENSE_I2C_SPAN 32
#define CAPSENSE_I2C_TYPE "i2c_opencores"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_QSYS
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x1481228
#define JTAG_UART_IRQ 1
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * key_pb_pio configuration
 *
 */

#define ALT_MODULE_CLASS_key_pb_pio altera_avalon_pio
#define KEY_PB_PIO_BASE 0x90
#define KEY_PB_PIO_BIT_CLEARING_EDGE_REGISTER 1
#define KEY_PB_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY_PB_PIO_CAPTURE 1
#define KEY_PB_PIO_DATA_WIDTH 1
#define KEY_PB_PIO_DO_TEST_BENCH_WIRING 1
#define KEY_PB_PIO_DRIVEN_SIM_VALUE 0
#define KEY_PB_PIO_EDGE_TYPE "RISING"
#define KEY_PB_PIO_FREQ 40000000
#define KEY_PB_PIO_HAS_IN 1
#define KEY_PB_PIO_HAS_OUT 0
#define KEY_PB_PIO_HAS_TRI 0
#define KEY_PB_PIO_IRQ 3
#define KEY_PB_PIO_IRQ_INTERRUPT_CONTROLLER_ID 0
#define KEY_PB_PIO_IRQ_TYPE "EDGE"
#define KEY_PB_PIO_NAME "/dev/key_pb_pio"
#define KEY_PB_PIO_RESET_VALUE 0
#define KEY_PB_PIO_SPAN 16
#define KEY_PB_PIO_TYPE "altera_avalon_pio"


/*
 * led_pio configuration
 *
 */

#define ALT_MODULE_CLASS_led_pio altera_avalon_pio
#define LED_PIO_BASE 0xa0
#define LED_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIO_CAPTURE 0
#define LED_PIO_DATA_WIDTH 8
#define LED_PIO_DO_TEST_BENCH_WIRING 0
#define LED_PIO_DRIVEN_SIM_VALUE 0
#define LED_PIO_EDGE_TYPE "NONE"
#define LED_PIO_FREQ 40000000
#define LED_PIO_HAS_IN 0
#define LED_PIO_HAS_OUT 1
#define LED_PIO_HAS_TRI 0
#define LED_PIO_IRQ -1
#define LED_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_PIO_IRQ_TYPE "NONE"
#define LED_PIO_NAME "/dev/led_pio"
#define LED_PIO_RESET_VALUE 0
#define LED_PIO_SPAN 16
#define LED_PIO_TYPE "altera_avalon_pio"


/*
 * modular_adc_sample_store_csr configuration
 *
 */

#define ALT_MODULE_CLASS_modular_adc_sample_store_csr altera_modular_adc
#define MODULAR_ADC_SAMPLE_STORE_CSR_BASE 0x1481000
#define MODULAR_ADC_SAMPLE_STORE_CSR_CORE_VARIANT 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_LENGTH 5
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_0 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_1 "CH1"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_10 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_11 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_12 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_13 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_14 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_15 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_16 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_17 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_18 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_19 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_2 "CH2"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_20 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_21 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_22 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_23 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_24 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_25 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_26 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_27 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_28 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_29 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_3 "CH3"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_30 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_31 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_32 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_33 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_34 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_35 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_36 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_37 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_38 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_39 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_4 "CH5"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_40 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_41 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_42 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_43 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_44 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_45 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_46 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_47 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_48 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_49 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_5 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_50 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_51 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_52 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_53 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_54 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_55 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_56 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_57 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_58 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_59 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_6 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_60 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_61 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_62 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_63 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_7 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_8 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_CSD_SLOT_9 "CH0"
#define MODULAR_ADC_SAMPLE_STORE_CSR_DUAL_ADC_MODE 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_IRQ 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_IRQ_INTERRUPT_CONTROLLER_ID 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_IS_THIS_FIRST_OR_SECOND_ADC 1
#define MODULAR_ADC_SAMPLE_STORE_CSR_NAME "/dev/modular_adc_sample_store_csr"
#define MODULAR_ADC_SAMPLE_STORE_CSR_PRESCALER_CH16 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_PRESCALER_CH8 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_REFSEL "External VREF"
#define MODULAR_ADC_SAMPLE_STORE_CSR_SPAN 512
#define MODULAR_ADC_SAMPLE_STORE_CSR_TYPE "altera_modular_adc"
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH0 1
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH1 1
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH10 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH11 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH12 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH13 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH14 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH15 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH16 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH2 1
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH3 1
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH4 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH5 1
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH6 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH7 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH8 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_CH9 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_USE_TSD 0
#define MODULAR_ADC_SAMPLE_STORE_CSR_VREF 2.5


/*
 * modular_adc_sequencer_csr configuration
 *
 */

#define ALT_MODULE_CLASS_modular_adc_sequencer_csr altera_modular_adc
#define MODULAR_ADC_SEQUENCER_CSR_BASE 0x1481230
#define MODULAR_ADC_SEQUENCER_CSR_CORE_VARIANT 0
#define MODULAR_ADC_SEQUENCER_CSR_CSD_LENGTH 5
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_0 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_1 "CH1"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_10 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_11 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_12 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_13 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_14 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_15 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_16 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_17 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_18 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_19 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_2 "CH2"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_20 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_21 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_22 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_23 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_24 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_25 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_26 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_27 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_28 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_29 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_3 "CH3"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_30 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_31 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_32 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_33 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_34 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_35 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_36 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_37 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_38 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_39 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_4 "CH5"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_40 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_41 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_42 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_43 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_44 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_45 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_46 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_47 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_48 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_49 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_5 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_50 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_51 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_52 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_53 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_54 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_55 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_56 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_57 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_58 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_59 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_6 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_60 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_61 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_62 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_63 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_7 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_8 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_CSD_SLOT_9 "CH0"
#define MODULAR_ADC_SEQUENCER_CSR_DUAL_ADC_MODE 0
#define MODULAR_ADC_SEQUENCER_CSR_IRQ -1
#define MODULAR_ADC_SEQUENCER_CSR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MODULAR_ADC_SEQUENCER_CSR_IS_THIS_FIRST_OR_SECOND_ADC 1
#define MODULAR_ADC_SEQUENCER_CSR_NAME "/dev/modular_adc_sequencer_csr"
#define MODULAR_ADC_SEQUENCER_CSR_PRESCALER_CH16 0
#define MODULAR_ADC_SEQUENCER_CSR_PRESCALER_CH8 0
#define MODULAR_ADC_SEQUENCER_CSR_REFSEL "External VREF"
#define MODULAR_ADC_SEQUENCER_CSR_SPAN 8
#define MODULAR_ADC_SEQUENCER_CSR_TYPE "altera_modular_adc"
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH0 1
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH1 1
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH10 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH11 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH12 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH13 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH14 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH15 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH16 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH2 1
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH3 1
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH4 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH5 1
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH6 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH7 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH8 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_CH9 0
#define MODULAR_ADC_SEQUENCER_CSR_USE_TSD 0
#define MODULAR_ADC_SEQUENCER_CSR_VREF 2.5


/*
 * nios_pll configuration
 *
 */

#define ALT_MODULE_CLASS_nios_pll altpll
#define NIOS_PLL_BASE 0x1481200
#define NIOS_PLL_IRQ -1
#define NIOS_PLL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define NIOS_PLL_NAME "/dev/nios_pll"
#define NIOS_PLL_SPAN 16
#define NIOS_PLL_TYPE "altpll"


/*
 * onchip_ram configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_ram altera_avalon_onchip_memory2
#define ONCHIP_RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_RAM_BASE 0x1440000
#define ONCHIP_RAM_CONTENTS_INFO ""
#define ONCHIP_RAM_DUAL_PORT 0
#define ONCHIP_RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_RAM_INIT_CONTENTS_FILE "deca_top_onchip_ram"
#define ONCHIP_RAM_INIT_MEM_CONTENT 1
#define ONCHIP_RAM_INSTANCE_ID "NONE"
#define ONCHIP_RAM_IRQ -1
#define ONCHIP_RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_RAM_NAME "/dev/onchip_ram"
#define ONCHIP_RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_RAM_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_RAM_SINGLE_CLOCK_OP 0
#define ONCHIP_RAM_SIZE_MULTIPLE 1
#define ONCHIP_RAM_SIZE_VALUE 153600
#define ONCHIP_RAM_SPAN 153600
#define ONCHIP_RAM_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_RAM_WRITABLE 1


/*
 * rh_temp_drdyn configuration
 *
 */

#define ALT_MODULE_CLASS_rh_temp_drdyn altera_avalon_pio
#define RH_TEMP_DRDYN_BASE 0x80
#define RH_TEMP_DRDYN_BIT_CLEARING_EDGE_REGISTER 0
#define RH_TEMP_DRDYN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RH_TEMP_DRDYN_CAPTURE 1
#define RH_TEMP_DRDYN_DATA_WIDTH 1
#define RH_TEMP_DRDYN_DO_TEST_BENCH_WIRING 0
#define RH_TEMP_DRDYN_DRIVEN_SIM_VALUE 0
#define RH_TEMP_DRDYN_EDGE_TYPE "FALLING"
#define RH_TEMP_DRDYN_FREQ 40000000
#define RH_TEMP_DRDYN_HAS_IN 1
#define RH_TEMP_DRDYN_HAS_OUT 0
#define RH_TEMP_DRDYN_HAS_TRI 0
#define RH_TEMP_DRDYN_IRQ 6
#define RH_TEMP_DRDYN_IRQ_INTERRUPT_CONTROLLER_ID 0
#define RH_TEMP_DRDYN_IRQ_TYPE "EDGE"
#define RH_TEMP_DRDYN_NAME "/dev/rh_temp_drdyn"
#define RH_TEMP_DRDYN_RESET_VALUE 0
#define RH_TEMP_DRDYN_SPAN 16
#define RH_TEMP_DRDYN_TYPE "altera_avalon_pio"


/*
 * rh_temp_i2c configuration
 *
 */

#define ALT_MODULE_CLASS_rh_temp_i2c i2c_opencores
#define RH_TEMP_I2C_BASE 0x0
#define RH_TEMP_I2C_IRQ 4
#define RH_TEMP_I2C_IRQ_INTERRUPT_CONTROLLER_ID 0
#define RH_TEMP_I2C_NAME "/dev/rh_temp_i2c"
#define RH_TEMP_I2C_SPAN 32
#define RH_TEMP_I2C_TYPE "i2c_opencores"


/*
 * sysid_qsys configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys altera_avalon_sysid_qsys
#define SYSID_QSYS_BASE 0x1481220
#define SYSID_QSYS_ID 57034
#define SYSID_QSYS_IRQ -1
#define SYSID_QSYS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_NAME "/dev/sysid_qsys"
#define SYSID_QSYS_SPAN 8
#define SYSID_QSYS_TIMESTAMP 1431115753
#define SYSID_QSYS_TYPE "altera_avalon_sysid_qsys"


/*
 * timer_qsys configuration
 *
 */

#define ALT_MODULE_CLASS_timer_qsys altera_avalon_timer
#define TIMER_QSYS_ALWAYS_RUN 0
#define TIMER_QSYS_BASE 0x40
#define TIMER_QSYS_COUNTER_SIZE 32
#define TIMER_QSYS_FIXED_PERIOD 0
#define TIMER_QSYS_FREQ 40000000
#define TIMER_QSYS_IRQ 2
#define TIMER_QSYS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_QSYS_LOAD_VALUE 39999
#define TIMER_QSYS_MULT 0.001
#define TIMER_QSYS_NAME "/dev/timer_qsys"
#define TIMER_QSYS_PERIOD 1
#define TIMER_QSYS_PERIOD_UNITS "ms"
#define TIMER_QSYS_RESET_OUTPUT 0
#define TIMER_QSYS_SNAPSHOT 1
#define TIMER_QSYS_SPAN 32
#define TIMER_QSYS_TICKS_PER_SEC 1000
#define TIMER_QSYS_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_QSYS_TYPE "altera_avalon_timer"


/*
 * ufm_flash_csr configuration
 *
 */

#define ALT_MODULE_CLASS_ufm_flash_csr altera_onchip_flash
#define UFM_FLASH_CSR_BASE 0x1481238
#define UFM_FLASH_CSR_BYTES_PER_PAGE 8192
#define UFM_FLASH_CSR_IRQ -1
#define UFM_FLASH_CSR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define UFM_FLASH_CSR_NAME "/dev/ufm_flash_csr"
#define UFM_FLASH_CSR_READ_ONLY_MODE 0
#define UFM_FLASH_CSR_SECTOR1_ENABLED 1
#define UFM_FLASH_CSR_SECTOR1_END_ADDR 0x7fff
#define UFM_FLASH_CSR_SECTOR1_START_ADDR 0
#define UFM_FLASH_CSR_SECTOR2_ENABLED 1
#define UFM_FLASH_CSR_SECTOR2_END_ADDR 0xffff
#define UFM_FLASH_CSR_SECTOR2_START_ADDR 0x8000
#define UFM_FLASH_CSR_SECTOR3_ENABLED 1
#define UFM_FLASH_CSR_SECTOR3_END_ADDR 0x6ffff
#define UFM_FLASH_CSR_SECTOR3_START_ADDR 0x10000
#define UFM_FLASH_CSR_SECTOR4_ENABLED 1
#define UFM_FLASH_CSR_SECTOR4_END_ADDR 0xb7fff
#define UFM_FLASH_CSR_SECTOR4_START_ADDR 0x70000
#define UFM_FLASH_CSR_SECTOR5_ENABLED 1
#define UFM_FLASH_CSR_SECTOR5_END_ADDR 0x15ffff
#define UFM_FLASH_CSR_SECTOR5_START_ADDR 0xb8000
#define UFM_FLASH_CSR_SPAN 8
#define UFM_FLASH_CSR_TYPE "altera_onchip_flash"


/*
 * ufm_flash_data configuration
 *
 */

#define ALT_MODULE_CLASS_ufm_flash_data altera_onchip_flash
#define UFM_FLASH_DATA_BASE 0x1200000
#define UFM_FLASH_DATA_BYTES_PER_PAGE 8192
#define UFM_FLASH_DATA_IRQ -1
#define UFM_FLASH_DATA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define UFM_FLASH_DATA_NAME "/dev/ufm_flash_data"
#define UFM_FLASH_DATA_READ_ONLY_MODE 0
#define UFM_FLASH_DATA_SECTOR1_ENABLED 1
#define UFM_FLASH_DATA_SECTOR1_END_ADDR 0x7fff
#define UFM_FLASH_DATA_SECTOR1_START_ADDR 0
#define UFM_FLASH_DATA_SECTOR2_ENABLED 1
#define UFM_FLASH_DATA_SECTOR2_END_ADDR 0xffff
#define UFM_FLASH_DATA_SECTOR2_START_ADDR 0x8000
#define UFM_FLASH_DATA_SECTOR3_ENABLED 1
#define UFM_FLASH_DATA_SECTOR3_END_ADDR 0x6ffff
#define UFM_FLASH_DATA_SECTOR3_START_ADDR 0x10000
#define UFM_FLASH_DATA_SECTOR4_ENABLED 1
#define UFM_FLASH_DATA_SECTOR4_END_ADDR 0xb7fff
#define UFM_FLASH_DATA_SECTOR4_START_ADDR 0x70000
#define UFM_FLASH_DATA_SECTOR5_ENABLED 1
#define UFM_FLASH_DATA_SECTOR5_END_ADDR 0x15ffff
#define UFM_FLASH_DATA_SECTOR5_START_ADDR 0xb8000
#define UFM_FLASH_DATA_SPAN 1441792
#define UFM_FLASH_DATA_TYPE "altera_onchip_flash"

#endif /* __SYSTEM_H_ */
