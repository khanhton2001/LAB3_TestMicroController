/*
 * fsm_automatic2.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Khanh Ton
 */


#include "fsm_automatic2.h"



void fsm_automatic2_run(){




	switch(status2){

	case INIT:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port , LED_RED_Pin       ,SET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , LED_GREEN_Pin   ,SET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , LED_YELLOW_Pin ,SET) ;

		        HAL_GPIO_WritePin(RED_GPIO_Port , RED_Pin       ,SET) ;
				HAL_GPIO_WritePin(GREEN_GPIO_Port ,GREEN_Pin   ,RESET) ;
				HAL_GPIO_WritePin(YELLOW_GPIO_Port , YELLOW_Pin ,SET) ;
		status = AUTO_YELLOW  ;
		setTimer3(200) ;
		isButton1Pressed() ;
		break ;

	case AUTO_RED:
		/* todo  */
		HAL_GPIO_WritePin(RED_GPIO_Port , RED_Pin       ,RESET) ;
		HAL_GPIO_WritePin(GREEN_GPIO_Port ,GREEN_Pin   , SET) ;
		HAL_GPIO_WritePin(YELLOW_GPIO_Port , YELLOW_Pin ,SET) ;

		if(timer3_flag == 1){
			status = AUTO_GREEN ;
			setTimer3(300) ;

		}

		if(isButton1Pressed() == 1){
			status = MAN_RED ;
			setTimer3(1000) ;
		}

		break ;

	case AUTO_GREEN:
		HAL_GPIO_WritePin(RED_GPIO_Port , RED_Pin       ,SET) ;
		HAL_GPIO_WritePin(GREEN_GPIO_Port ,GREEN_Pin   ,RESET) ;
		HAL_GPIO_WritePin(YELLOW_GPIO_Port , YELLOW_Pin ,SET) ;

		if(timer3_flag == 1){
			status = AUTO_YELLOW ;
			setTimer3(200)       ;

		}

		if(isButton1Pressed() == 1){
			status = MAN_GREEN ;
			setTimer3(1000)    ;

		}
		break ;

	case AUTO_YELLOW:
		HAL_GPIO_WritePin(RED_GPIO_Port , RED_Pin       ,SET) ;
		HAL_GPIO_WritePin(GREEN_GPIO_Port ,GREEN_Pin   , SET) ;
	    HAL_GPIO_WritePin(YELLOW_GPIO_Port , YELLOW_Pin ,RESET) ;

		if(timer3_flag == 1){
			status = AUTO_RED ;
			setTimer3(500) ;

		}

		if(isButton1Pressed() == 1){
			status = MAN_YELLOW  ;
			setTimer3(1000)      ;
		}
		break ;

	default:
		break ;
	}
}
