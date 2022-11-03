/*
 * software_timer3.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Khanh Ton
 */


/*
 * software_timer.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Khanh Ton
 */

#include"software_timer.h"
int timer3_counter = 0 ;
int timer3_flag = 0 ;

int timer4_counter = 0 ;
int timer4_flag = 0 ;


void setTimer3(int duration){
	timer3_counter = duration ;
	timer3_flag = 0 ;
	}



void timerRun3(){
	if(timer3_counter > 0){
		timer3_counter-- ;
		if(timer3_counter <= 0 ){
			timer3_flag = 1;
		}
	}
}

void setTimer4(int duration){
	timer4_counter = duration ;
	timer4_flag = 0 ;
	}



void timerRun4(){
	if(timer4_counter > 0){
		timer4_counter-- ;
		if(timer4_counter <= 0 ){
			timer4_flag = 1;
		}
	}
}
