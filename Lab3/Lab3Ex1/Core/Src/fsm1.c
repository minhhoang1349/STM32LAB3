/*
 * fsm.c
 *
 *  Created on: Nov 10, 2023
 *      Author: hoang
 */
#include "fsm.h"

void toogleRed(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
}
void toogleGreen(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
}
void toogleYellow(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
}

void fsm_automatic_run1(){
	switch (status1	) {
		case INIT:
			status1 = AUTO_RED;
			setTimer1(RED_TIME);
			break;
		case AUTO_RED:
			toogleRed();
			if(timer1_flag==1){
				status1 = AUTO_GREEN;
				setTimer1(GREEN_TIME);
				timer=GREEN_TIME/100;
			}


			break;
		case AUTO_GREEN:
			toogleGreen();
			if(timer1_flag==1){
				status1 = AUTO_YELLOW;
				setTimer1(YELLOW_TIME);
				timer=YELLOW_TIME/100;
			}


			break;
		case AUTO_YELLOW:
			toogleYellow();
			if(timer1_flag==1){
				status1 = AUTO_RED;
				setTimer1(RED_TIME);
				timer=RED_TIME/100;
			}



			break;
		default:
			break;
	}
}

