/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"
#include "string.h"

#include "cmsis_os.h"
#include "usart.h"
#include "gpio.h"

#include "./MYFREERTOS/myfreertos.h"
#include "./LCD/tftlcd.h"



/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
void ConfigureTimeForRunTimeStats(void);
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define key_Pin GPIO_PIN_13
#define key_GPIO_Port GPIOC
#define led_red_Pin GPIO_PIN_0
#define led_red_GPIO_Port GPIOA
#define led_green_Pin GPIO_PIN_1
#define led_green_GPIO_Port GPIOA
#define led_blue_Pin GPIO_PIN_2
#define led_blue_GPIO_Port GPIOA
#define key_s1_Pin GPIO_PIN_12
#define key_s1_GPIO_Port GPIOB
#define key_s2_Pin GPIO_PIN_13
#define key_s2_GPIO_Port GPIOB
#define key_s3_Pin GPIO_PIN_14
#define key_s3_GPIO_Port GPIOB
#define key_s4_Pin GPIO_PIN_15
#define key_s4_GPIO_Port GPIOB
#define LCD_DC_Pin GPIO_PIN_4
#define LCD_DC_GPIO_Port GPIOB
#define LCD_RST_Pin GPIO_PIN_6
#define LCD_RST_GPIO_Port GPIOB
#define LCD_PWR_Pin GPIO_PIN_7
#define LCD_PWR_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
