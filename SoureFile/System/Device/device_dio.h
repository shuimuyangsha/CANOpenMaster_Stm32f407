/**
  ******************************************************************************
  * @file    device_dio.h
  * @author  Zhenglin R&D Driver Software Team
  * @version V1.0.0
  * @date    26/04/2015
  * @brief   This file is device_dio file.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DEVICE_DIO_H
#define __DEVICE_DIO_H

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void LedGpioInit(void);

#ifdef __cplusplus
}
#endif

#endif /* __DEVICE_DIO_H */

/******************* (C) COPYRIGHT 2015 Personal Electronics *****END OF FILE****/
