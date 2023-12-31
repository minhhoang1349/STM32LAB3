/*
 * timer.h
 *
 *  Created on: Nov 10, 2023
 *      Author: hoang
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timerRun0();
void timerRun1();
void timerRun2();
void timerRun3();

#endif /* INC_TIMER_H_ */
