/*
 * traffic_light.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Khanh Ton
 */


/*
 * traffic_light.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Khanh Ton
 */

#include "traffic_light.h"

void setTrafficLight(){

	switch(status){

	case AUTO_RED:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port   , LED_RED_Pin   , RESET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , LED_GREEN_Pin ,   SET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin,   SET) ;
		break ;

	case AUTO_GREEN:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port , LED_RED_Pin       ,  SET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , LED_GREEN_Pin   ,RESET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , LED_YELLOW_Pin ,  SET) ;
		break ;

	case AUTO_YELLOW:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port   , LED_RED_Pin     , SET)  ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , LED_GREEN_Pin   , SET)  ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , LED_YELLOW_Pin , RESET);
		break ;

	case MAN_RED:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port   , LED_RED_Pin   , RESET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , LED_GREEN_Pin ,   SET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin,   SET) ;

		break ;

	case MAN_GREEN:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port , LED_RED_Pin       ,  SET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , LED_GREEN_Pin   ,RESET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , LED_YELLOW_Pin ,  SET) ;
		break ;

	case MAN_YELLOW:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port   , LED_RED_Pin     , SET)  ;
	    HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , LED_GREEN_Pin   , SET)  ;
	    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , LED_YELLOW_Pin , RESET);
		break ;

	default:
		break ;

	}
}
