/*
 * software_timer.h
 *
 *  Created on: Nov 2, 2022
 *      Author: Khanh Ton
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag ;
extern int timer2_flag ;


extern int button_timer_flag ;

void setTimer1(int duration) ;
void setTimer2(int duration) ;


void button_setTimer(int duration) ;

void timerRun1() ;
void timerRun2() ;


void button_timerRun() ;

#endif /* INC_SOFTWARE_TIMER_H_ */
