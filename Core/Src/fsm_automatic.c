/*
 * fsm_automatic.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Khanh Ton
 */

#include "fsm_automatic.h"



void fsm_automatic_run(){




	switch(status){

	case INIT:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port , LED_RED_Pin       ,SET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , LED_GREEN_Pin   ,SET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , LED_YELLOW_Pin ,SET) ;

		status = AUTO_RED  ;
		setTimer1(600) ;
		isButton1Pressed() ;
		break ;

	case AUTO_RED:
		/* todo  */
        setTrafficLight() ;

		if(timer1_flag == 1){
			status = AUTO_GREEN ;
			setTimer1(300) ;

		}

		if(isButton1Pressed() == 1){
			status = MAN_RED ;
			setTimer1(1000) ;
		}

		break ;

	case AUTO_GREEN:
		setTrafficLight() ;

		if(timer1_flag == 1){
			status = AUTO_YELLOW ;
			setTimer1(200)       ;

		}

		if(isButton1Pressed() == 1){
			status = MAN_GREEN ;
			setTimer1(1000)    ;

		}
		break ;

	case AUTO_YELLOW:
		setTrafficLight() ;

		if(timer1_flag == 1){
			status = AUTO_RED ;
			setTimer1(500) ;

		}

		if(isButton1Pressed() == 1){
			status = MAN_YELLOW  ;
			setTimer1(1000)      ;
		}
		break ;

	default:
		break ;
	}
}
