/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_DISP_B2_10 (coord D9), LPUART2_TXD/BT_UART_TXD/U354[4]/U16[2]/J25[3]/J9[4] */
/* Routed pin properties */
#define BOARD_CLICKINITPINS_BT_UART_TXD_PERIPHERAL                        LPI2C3   /*!< Peripheral name */
#define BOARD_CLICKINITPINS_BT_UART_TXD_SIGNAL                               SCL   /*!< Signal name */

/* GPIO_DISP_B2_11 (coord A6), LPUART2_RXD/BT_UART_RXD/U16[3]/U355[20]/J9[2] */
/* Routed pin properties */
#define BOARD_CLICKINITPINS_BT_UART_RXD_PERIPHERAL                        LPI2C3   /*!< Peripheral name */
#define BOARD_CLICKINITPINS_BT_UART_RXD_SIGNAL                               SDA   /*!< Signal name */

/* GPIO_EMC_B2_06 (coord T1), LIGHTRANGER_EN */
/* Routed pin properties */
#define BOARD_CLICKINITPINS_SEMC_D22_PERIPHERAL                            GPIO8   /*!< Peripheral name */
#define BOARD_CLICKINITPINS_SEMC_D22_SIGNAL                              gpio_io   /*!< Signal name */
#define BOARD_CLICKINITPINS_SEMC_D22_CHANNEL                                 16U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_CLICKINITPINS_SEMC_D22_GPIO                                  GPIO8   /*!< GPIO peripheral base pointer */
#define BOARD_CLICKINITPINS_SEMC_D22_GPIO_PIN                                16U   /*!< GPIO pin number */
#define BOARD_CLICKINITPINS_SEMC_D22_GPIO_PIN_MASK                   (1U << 16U)   /*!< GPIO pin mask */

/* GPIO_EMC_B2_02 (coord K3), LIGHTRANGER_INT */
/* Routed pin properties */
#define BOARD_CLICKINITPINS_SEMC_D18_PERIPHERAL                            GPIO8   /*!< Peripheral name */
#define BOARD_CLICKINITPINS_SEMC_D18_SIGNAL                              gpio_io   /*!< Signal name */
#define BOARD_CLICKINITPINS_SEMC_D18_CHANNEL                                 12U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_CLICKINITPINS_SEMC_D18_GPIO                                  GPIO8   /*!< GPIO peripheral base pointer */
#define BOARD_CLICKINITPINS_SEMC_D18_GPIO_PIN                                12U   /*!< GPIO pin number */
#define BOARD_CLICKINITPINS_SEMC_D18_GPIO_PIN_MASK                   (1U << 12U)   /*!< GPIO pin mask */

/*!
 * @brief configure i2c5 pin for FXOS8700 ecompass sensor
 *
 */
void BOARD_ClickInitPins(void);               /* Function assigned for the Cortex-M4F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
