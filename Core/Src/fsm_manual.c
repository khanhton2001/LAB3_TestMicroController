/*
 * fsm_manual.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Khanh Ton
 */
#include "fsm_manual.h"

void fsm_manual_run(){

	switch(status){

	case MAN_RED:
		setTrafficLight()     ;

		if(timer1_flag == 1){
			status = AUTO_RED ;
			setTimer1(500)    ;
		}

	    if(isButton1Pressed() == 1){
	        	status = MAN_GREEN;
	        	setTimer1(1000) ;
	    }

		break ;


	case MAN_GREEN:
		setTrafficLight()  ;

        if(timer1_flag == 1){
        	status = AUTO_GREEN ;
        	setTimer1(300)      ;
        }

        if(isButton1Pressed() == 1){
        	status = MAN_YELLOW ;
        	setTimer1(1000) ;
        }


        break ;


	case MAN_YELLOW:
		setTrafficLight()  ;

		if(timer1_flag == 1){
			status = AUTO_YELLOW ;
			setTimer1(200) ;
		}

		if(isButton1Pressed() == 1 ){
			status = MAN_RED ;
			setTimer1(1000)  ;
 		}
		break ;

	default:
		break ;

	}


}
