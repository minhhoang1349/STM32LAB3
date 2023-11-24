/*
 * Update7Seg.h
 *
 *  Created on: Nov 10, 2023
 *      Author: hoang
 */
#ifndef INC_UPDATE7SEG_H_
#define INC_UPDATE7SEG_H_

#include "Led7segment.h"
#include "main.h"


extern const int MAX_LED ;
extern int index_led ;
extern int led_buffer [];



void update7SEG (int index );


#endif /* INC_UPDATE7SEG_H_ */
