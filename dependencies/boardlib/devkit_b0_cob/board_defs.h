/* Copyright (C) 2022 Alif Semiconductor - All Rights Reserved.
 * Use, distribution and modification of this code is permitted under the
 * terms stated in the Alif Semiconductor Software License Agreement
 *
 * You should have received a copy of the Alif Semiconductor Software
 * License Agreement with this file. If not, please write to:
 * contact@alifsemi.com, or visit: https://alifsemi.com/license
 *
 */

/******************************************************************************
 * @file     board.h
 * @brief    BOARD API
 ******************************************************************************/

#define BOARD_CAMERA_I2C_INSTANCE               30 /* Signifying I3C interface */

#define BOARD_I2S_INSTANCE                      4 /* SoC has I2S0-3 and LPI2S is assigned to 4 */

#define BOARD_SPI_INSTANCE                      3
#define BOARD_SPI_SS_PORT                       12   /* workaround for SPI thermometer */
#define BOARD_SPI_SS_PIN                        7

#define BOARD_UART1_INSTANCE                    2

#define BOARD_UART2_INSTANCE                    4

#define BOARD_UART3_INSTANCE                    5

#define BOARD_LED_COUNT                         2
#define BOARD_LEDRGB_COUNT                      0
#define BOARD_BUTTON_COUNT                      2

// <o> User BUTTON1 (sw1) GPIO port number and pin number
#define BOARD_BUTTON1_GPIO_PORT                 8
#define BOARD_BUTTON1_PIN_NO                    4

// <o> User BUTTON2 (sw2) GPIO port number and pin number
#define BOARD_BUTTON2_GPIO_PORT                 8
#define BOARD_BUTTON2_PIN_NO                    5

// <o> User LED1 (ds1) GPIO port number and pin number
#define BOARD_LED1_GPIO_PORT                    3
#define BOARD_LED1_PIN_NO                       7

// <o> User LED2 (ds2) GPIO port number and pin number
#define BOARD_LED2_GPIO_PORT                    7
#define BOARD_LED2_PIN_NO                       2

// <o> LCD panel reset GPIO port number and pin number
#define BOARD_LCD_RESET_GPIO_PORT               LP
#define BOARD_LCD_RESET_PIN_NO                  4

// <o> LCD panel backlight GPIO port number and pin number
#define BOARD_LCD_BACKLIGHT_GPIO_PORT           4
#define BOARD_LCD_BACKLIGHT_PIN_NO              1

// <o> Touch screen reset GPIO port number and pin number
#define BOARD_TOUCH_RESET_GPIO_PORT             LP
#define BOARD_TOUCH_RESET_PIN_NO                2

// <o> Touch screen interrupt GPIO port number and pin number
#define BOARD_TOUCH_INT_GPIO_PORT               9
#define BOARD_TOUCH_INT_PIN_NO                  4

// <o> Camera module reset GPIO port number and pin number
#define BOARD_CAMERA_RESET_GPIO_PORT            LP
#define BOARD_CAMERA_RESET_PIN_NO               5
