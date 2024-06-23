#ifndef __SUBGHZ_SUPPORT_H
#define __SUBGHZ_SUPPORT_H

#include "stm32wlxx_ll_gpio.h"
#include "stm32wlxx_hal_subghz.h"

#include <stdint.h>
#include <stdbool.h>

#define ADDRESS						0x5A

#define RF_FREQ						915000000
#define BIT_RATE					50000
#define FREQ_DEVIATION				25000
#define XTAL_FREQ					32000000




#define RF_SW_CTRL3_Pin LL_GPIO_PIN_3
#define RF_SW_CTRL3_GPIO_Port GPIOC
#define RF_SW_CTRL2_Pin LL_GPIO_PIN_5
#define RF_SW_CTRL2_GPIO_Port GPIOC
#define RF_SW_CTRL1_Pin LL_GPIO_PIN_4
#define RF_SW_CTRL1_GPIO_Port GPIOC

HAL_StatusTypeDef subghz_default_init(SUBGHZ_HandleTypeDef *hsubghz);
HAL_StatusTypeDef DefaultModulationParams(SUBGHZ_HandleTypeDef *hsubghz);
HAL_StatusTypeDef DefaultCRC(SUBGHZ_HandleTypeDef *hsubghz);
HAL_StatusTypeDef SetPayloadLength(SUBGHZ_HandleTypeDef *hsubghz, uint8_t length);
HAL_StatusTypeDef DefaultTxConfig(SUBGHZ_HandleTypeDef *hsubghz);
HAL_StatusTypeDef SetAddress(SUBGHZ_HandleTypeDef *hsubghz, uint8_t address);
HAL_StatusTypeDef SetRfFrequency(SUBGHZ_HandleTypeDef *hsubghz, uint32_t frequency);

void subghz_radio_getPacketStatus(uint8_t *buffer, bool print);


#endif /* __SUBGHZ_SUPPORT_H */
