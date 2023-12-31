/*
 * fsm1.c
 *
 *  Created on: Nov 10, 2023
 *      Author: hoang
 */
#include "fsm.h"

void toogleRed1(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
}
void toogleGreen1(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
}
void toogleYellow1(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
}

void fsm_automatic_run2(){
	switch (status2	) {
		case INIT:
			status2 = AUTO_GREEN;
			setTimer2(GREEN_TIME);
			break;
		case AUTO_RED:
			toogleRed1();
			if(timer2_flag==1){
				status2 = AUTO_GREEN;
				setTimer2(GREEN_TIME);
				timer2=GREEN_TIME/100;
			}


			break;
		case AUTO_GREEN:
			toogleGreen1();
			if(timer2_flag==1){
				status2 = AUTO_YELLOW;
				setTimer2(YELLOW_TIME);
				timer2=YELLOW_TIME/100;
			}


			break;
		case AUTO_YELLOW:
			toogleYellow1();
			if(timer2_flag==1){
				status2 = AUTO_RED;
				setTimer2(RED_TIME);
				timer2=RED_TIME/100;
			}



			break;
		default:
			break;
	}
}
