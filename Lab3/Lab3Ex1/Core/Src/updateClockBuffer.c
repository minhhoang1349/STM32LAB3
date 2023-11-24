/*
 * updateClockBuffer.c
 *
 *  Created on: Nov 10, 2023
 *      Author: hoang
 */

#include "updateClockBuffer.h"



void updateClockBuffer () {
	led_buffer[0]=timer/10;
	led_buffer[1]=timer%10;
	led_buffer[2]=timer2/10;
	led_buffer[3]=timer2%10;

}
