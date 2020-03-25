/*******************************************************************************
  * @file    main.c
  * @author  Zhenglin R&D Driver Software Team
  * @version V1.0.0
  * @date    24/05/2015
  * @brief   This file is main file.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "CANOpenObjDictConfig.h"
#include "device_dio.h"
#include "can_stm32.h"
#include "GlobalVar.h"
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
Message testMessage= {
  0x181,	/**< message's ID */
  0,		/**< remote transmission request. (0 if not rtr message, 1 if rtr message) */
  8,		/**< message's length (0 to 8) */
  {1,2,3,4,5,6,7,8}, /**< message's datas */
} ;
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(void)
{
	int i;
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);

	LedGpioInit();
	/*init the Canopen thread*/
	CanopenInit(); 	
	canSend(CAN1, &testMessage);	
	for( ;; )
	{
		canSend(CAN1, &testMessage);
		
		for(i=0; i<65536; i++);
		for(i=0; i<65536; i++);
		for(i=0; i<65536; i++);
		for(i=0; i<65536; i++);
		for(i=0; i<65536; i++);		
	}
	;
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {}
}
#endif


/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
