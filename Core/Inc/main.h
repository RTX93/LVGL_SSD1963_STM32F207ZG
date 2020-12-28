/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Pr_LMT_Pin GPIO_PIN_14
#define Pr_LMT_GPIO_Port GPIOC
#define TV_Pin GPIO_PIN_0
#define TV_GPIO_Port GPIOF
#define RR_Pin GPIO_PIN_1
#define RR_GPIO_Port GPIOF
#define MODE_Pin GPIO_PIN_5
#define MODE_GPIO_Port GPIOF
#define PAUSE_Pin GPIO_PIN_6
#define PAUSE_GPIO_Port GPIOF
#define MUTE_Pin GPIO_PIN_7
#define MUTE_GPIO_Port GPIOF
#define REPORT_Pin GPIO_PIN_8
#define REPORT_GPIO_Port GPIOF
#define LCD_RST_Pin GPIO_PIN_9
#define LCD_RST_GPIO_Port GPIOF
#define TRIGGER_Pin GPIO_PIN_3
#define TRIGGER_GPIO_Port GPIOC
#define LCD_D4_Pin GPIO_PIN_7
#define LCD_D4_GPIO_Port GPIOE
#define LCD_D5_Pin GPIO_PIN_8
#define LCD_D5_GPIO_Port GPIOE
#define LCD_D6_Pin GPIO_PIN_9
#define LCD_D6_GPIO_Port GPIOE
#define LCD_D7_Pin GPIO_PIN_10
#define LCD_D7_GPIO_Port GPIOE
#define Encoder_IN2_Pin GPIO_PIN_11
#define Encoder_IN2_GPIO_Port GPIOE
#define MCU_ROT_SWITCH_Pin GPIO_PIN_12
#define MCU_ROT_SWITCH_GPIO_Port GPIOE
#define MCU_ROT_SWITCH_EXTI_IRQn EXTI15_10_IRQn
#define LCD_RL_Pin GPIO_PIN_9
#define LCD_RL_GPIO_Port GPIOD
#define LCD_DC_RS_Pin GPIO_PIN_11
#define LCD_DC_RS_GPIO_Port GPIOD
#define LCD_D0_Pin GPIO_PIN_14
#define LCD_D0_GPIO_Port GPIOD
#define LCD_D1_Pin GPIO_PIN_15
#define LCD_D1_GPIO_Port GPIOD
#define DEBUG_TX_Pin GPIO_PIN_6
#define DEBUG_TX_GPIO_Port GPIOC
#define DEBUG_RX_Pin GPIO_PIN_7
#define DEBUG_RX_GPIO_Port GPIOC
#define Encoder_IN1_Pin GPIO_PIN_8
#define Encoder_IN1_GPIO_Port GPIOA
#define GPIO_TST_Pin GPIO_PIN_10
#define GPIO_TST_GPIO_Port GPIOC
#define LCD_D2_Pin GPIO_PIN_0
#define LCD_D2_GPIO_Port GPIOD
#define LCD_D3_Pin GPIO_PIN_1
#define LCD_D3_GPIO_Port GPIOD
#define LCD_RD_Pin GPIO_PIN_4
#define LCD_RD_GPIO_Port GPIOD
#define LCD_WR_Pin GPIO_PIN_5
#define LCD_WR_GPIO_Port GPIOD
#define LCD_CS_Pin GPIO_PIN_7
#define LCD_CS_GPIO_Port GPIOD
#define LCD_UD_Pin GPIO_PIN_12
#define LCD_UD_GPIO_Port GPIOG
#define IE_Pin GPIO_PIN_7
#define IE_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
