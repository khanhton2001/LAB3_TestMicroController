/*
 * global.h
 *
 *  Created on: Nov 2, 2022
 *      Author: Khanh Ton
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#include "software_timer.h"
#include "software_timer3.h"
#include "button.h"
#include "main.h"


#define INIT           1
#define AUTO_RED       2
#define AUTO_GREEN     3
#define AUTO_YELLOW    4

#define MAN_RED        12
#define MAN_YELLOW     13
#define MAN_GREEN      14

#define LED_LIGHT      17
#define GREEN_LIGHT    18
#define YELLOW_LIGHT   19


extern int status  ;
extern int status2 ;

#endif /* INC_GLOBAL_H_ */
