/**
  ******************************************************************************
  * @file    stm32f107.h
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    07/16/2010 
  * @brief   This file contains all the functions prototypes for the STM32F107 
  *          file.
  ******************************************************************************
  * @copy
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2010 STMicroelectronics</center></h2>
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F107_H
#define __STM32F107_H

#ifdef __cplusplus
 extern "C" {
#endif


/* Includes ------------------------------------------------------------------*/
//#include "stm32_eval.h"
//#include "stm3210c_eval_lcd.h"
//#include "stm3210c_eval_ioe.h"

#define DP83848_PHY        		/* Ethernet pins mapped on STM3210C-EVAL Board */
#define PHY_ADDRESS       0x00 	/* Relative to STM3210C-EVAL Board */
#define PHY_ADDRESS1      0x01 	/* Relative to STM3210C-EVAL Board */

void IWDG_init(void);
void System_Setup(void);
uint32_t ETH_Init_Interrupt(uint16_t PHYAddress);

#ifdef __cplusplus
}
#endif

#endif /* __STM32F10F107_H */


/******************* (C) COPYRIGHT 2010 STMicroelectronics *****END OF FILE****/
