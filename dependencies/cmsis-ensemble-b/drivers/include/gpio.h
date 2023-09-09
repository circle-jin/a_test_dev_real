/* Copyright (C) 2023 Alif Semiconductor - All Rights Reserved.
 * Use, distribution and modification of this code is permitted under the
 * terms stated in the Alif Semiconductor Software License Agreement
 *
 * You should have received a copy of the Alif Semiconductor Software
 * License Agreement with this file. If not, please write to:
 * contact@alifsemi.com, or visit: https://alifsemi.com/license
 *
 */

/**************************************************************************//**
 * @file     gpio.h
 * @author   Girish BN, Manoj A Murudi
 * @email    girish.bn@alifsemi.com, manoj.murudi@alifsemi.com
 * @version  V1.0.0
 * @date     29-March-2023
 * @brief    Low Level header file for GPIO.
 * @bug      None.
 * @Note     None
 ******************************************************************************/

#ifndef GPIO_H_
#define GPIO_H_

#ifdef  __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

/**
  * @brief LPGPIO (LPGPIO)
  */

typedef struct {                                /*!< (@ 0x42002000) LPGPIO Structure                                           */
    volatile uint32_t  GPIO_SWPORTA_DR;         /*!< (@ 0x00000000) GPIO Port Data Register                                    */
    volatile uint32_t  GPIO_SWPORTA_DDR;        /*!< (@ 0x00000004) GPIO Port Data Direction Register                          */
    volatile uint32_t  GPIO_SWPORTA_CTL;        /*!< (@ 0x00000008) GPIO Port Data Source Register                             */
    volatile uint32_t  RESERVED[9];
    volatile uint32_t  GPIO_INTEN;              /*!< (@ 0x00000030) GPIO Port Interrupt Enable Register                        */
    volatile uint32_t  GPIO_INTMASK;            /*!< (@ 0x00000034) GPIO Port Interrupt Mask Register                          */
    volatile uint32_t  GPIO_INTTYPE_LEVEL;      /*!< (@ 0x00000038) GPIO Port Interrupt Level Register                         */
    volatile uint32_t  GPIO_INT_POLARITY;       /*!< (@ 0x0000003C) GPIO Port Interrupt Polarity Register                      */
    volatile uint32_t  GPIO_INTSTATUS;          /*!< (@ 0x00000040) GPIO Port Interrupt Status Register                        */
    volatile uint32_t  GPIO_RAW_INTSTATUS;      /*!< (@ 0x00000044) GPIO Port Raw Interrupt Status Register                    */
    volatile uint32_t  GPIO_DEBOUNCE;           /*!< (@ 0x00000048) GPIO Port Debounce Enable Register                         */
    volatile uint32_t  GPIO_PORTA_EOI;          /*!< (@ 0x0000004C) GPIO Port End Of Interrupt Register                        */
    volatile uint32_t  GPIO_EXT_PORTA;          /*!< (@ 0x00000050) GPIO External Port Read Register                           */
    volatile uint32_t  RESERVED1[3];
    volatile uint32_t  GPIO_LS_SYNC;            /*!< (@ 0x00000060) Synchronization Level Register                             */
    volatile uint32_t  GPIO_ID_CODE;            /*!< (@ 0x00000064) ReservedNOTE: Internal register!                           */
    volatile uint32_t  GPIO_INT_BOTHEDGE;       /*!< (@ 0x00000068) GPIO Port Interrupt Both Edge Type Register                */
    volatile uint32_t  GPIO_VER_ID_CODE;        /*!< (@ 0x0000006C) ReservedNOTE: Internal register!                           */
    volatile uint32_t  GPIO_CONFIG_REG2;        /*!< (@ 0x00000070) Module Configuration Register 2NOTE: Internal
                                                                    register!                                                  */
    volatile uint32_t  GPIO_CONFIG_REG1;        /*!< (@ 0x00000074) Module Configuration Register 1NOTE: Internal
                                                                    register!                                                  */
} LPGPIO_Type;                                  /*!< Size = 120 (0x78)                                                         */

/**
 * enum GPIO_PIN_DIR.
 * gpio pin direction.
 */
typedef enum _GPIO_PIN_DIR {
    GPIO_PIN_DIR_INPUT,               /**<GPIO PIN direction to input>*/
    GPIO_PIN_DIR_OUTPUT,              /**<GPIO PIN direction to output>*/
} GPIO_PIN_DIR;

/**
  \fn          static inline void gpio_set_direction_input (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO set direction as input.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_set_direction_input (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_SWPORTA_DDR &= ~(1 << pin_no);
}

/**
  \fn          static inline void gpio_set_direction_output (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO set direction as output.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_set_direction_output (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_SWPORTA_DDR |= (1 << pin_no);
}

/**
  \fn          static inline bool gpio_get_direction (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       Read GPIO direction.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      direction
*/
static inline GPIO_PIN_DIR gpio_get_direction (LPGPIO_Type *gpio, uint8_t pin_no)
{
    if ((gpio->GPIO_SWPORTA_DDR & (1 << pin_no)) >> pin_no)
    {
        return GPIO_PIN_DIR_OUTPUT;
    }
    else
    {
        return GPIO_PIN_DIR_INPUT;
    }
}

/**
  \fn          static inline void gpio_set_value_low (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO set value as low.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_set_value_low (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_SWPORTA_DR &= ~(1 << pin_no);
}

/**
  \fn          static inline void gpio_set_value_high (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO set value as high.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_set_value_high (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_SWPORTA_DR |= (1 << pin_no);
}

/**
  \fn          static inline void gpio_toggle_value (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO toggle current value.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_toggle_value (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_SWPORTA_DR ^= (1 << pin_no);
}

/**
  \fn          static inline bool gpio_get_value (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       Read GPIO current value.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      value
*/
static inline uint8_t gpio_get_value (LPGPIO_Type *gpio, uint8_t pin_no)
{
    return gpio->GPIO_EXT_PORTA & (1 << pin_no) ? 1: 0;
}

/**
  \fn          static inline uint32_t gpio_read_config1 (LPGPIO_Type *gpio)
  \brief       Read GPIO config1 register value.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      register value
*/
static inline uint32_t gpio_read_config1 (LPGPIO_Type *gpio)
{
    return gpio->GPIO_CONFIG_REG1;
}

/**
  \fn          static inline uint32_t gpio_read_config2 (LPGPIO_Type *gpio)
  \brief       Read GPIO config2 register value.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      register value
*/
static inline uint32_t gpio_read_config2 (LPGPIO_Type *gpio)
{
    return gpio->GPIO_CONFIG_REG2;
}

/**
  \fn          static inline void gpio_enable_interrupt (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO interrupt enable.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_enable_interrupt (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_INTEN |= (1 << pin_no);
}

/**
  \fn          static inline void gpio_disable_interrupt (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO interrupt disable.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_disable_interrupt (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_INTEN &= ~(1 << pin_no);
}

/**
  \fn          static inline void gpio_mask_interrupt (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO interrupt mask.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_mask_interrupt (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_INTMASK |= (1 << pin_no);
}

/**
  \fn          static inline void gpio_unmask_interrupt (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO interrupt unmask.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_unmask_interrupt (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_INTMASK &= ~(1 << pin_no);
}

/**
  \fn          static inline bool gpio_read_int_rawstatus (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       Read GPIO interrupt raw status.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline bool gpio_read_int_rawstatus (LPGPIO_Type *gpio, uint8_t pin_no)
{
    return ((gpio->GPIO_RAW_INTSTATUS & (1 << pin_no)) >> pin_no);
}

/**
  \fn          static inline void gpio_interrupt_set_both_edge_trigger (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO set interrupt on both edge.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_interrupt_set_both_edge_trigger (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_INT_BOTHEDGE |= (1 << pin_no);
}

/**
  \fn          static inline void gpio_interrupt_set_level_trigger (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO set interrupt on level trigger.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_interrupt_set_level_trigger (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_INTTYPE_LEVEL &= ~(1 << pin_no);
}

/**
  \fn          static inline void gpio_interrupt_set_edge_trigger (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO set interrupt on edge trigger.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_interrupt_set_edge_trigger (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_INTTYPE_LEVEL |= (1 << pin_no);
}

/**
  \fn          static inline bool gpio_get_interrupt_trigger_type (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       Read GPIO interrupt trigger type.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline bool gpio_get_interrupt_trigger_type (LPGPIO_Type *gpio, uint8_t pin_no)
{
    return ((gpio->GPIO_INTTYPE_LEVEL & (1 << pin_no)) >> pin_no);
}

/**
  \fn          static inline void gpio_interrupt_set_polarity_high (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO set interrupt polarity as high.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_interrupt_set_polarity_high (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_INT_POLARITY |= (1 << pin_no);
}

/**
  \fn          static inline void gpio_interrupt_set_polarity_low (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO set interrupt polarity as high.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_interrupt_set_polarity_low (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_INT_POLARITY &= ~(1 << pin_no);
}

/**
  \fn          static inline void gpio_enable_debounce (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO enable debounce feature.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_enable_debounce (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_DEBOUNCE |= (1 << pin_no);
}

/**
  \fn          static inline void gpio_disable_debounce (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO disable debounce feature.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_disable_debounce (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_DEBOUNCE &= ~(1 << pin_no);
}

/**
  \fn          static inline void gpio_interrupt_eoi (LPGPIO_Type *gpio, uint8_t pin_no)
  \brief       GPIO clear an interrupt.
  \param       gpio     Pointer to the GPIO register map
  \param       pin_no   pin number
  \return      none
*/
static inline void gpio_interrupt_eoi (LPGPIO_Type *gpio, uint8_t pin_no)
{
    gpio->GPIO_PORTA_EOI |= (1 << pin_no);
}

#ifdef __cplusplus
}
#endif

#endif /* GPIO_H_ */

/************************ (C) COPYRIGHT ALIF SEMICONDUCTOR *****END OF FILE****/
