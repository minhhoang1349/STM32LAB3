/*
 * input_reading.h
 *
 *  Created on: Nov 10, 2023
 *      Author: hoang
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#define NO_OF_BUTTONS		4
void	button_reading (void);
extern int button_flag[NO_OF_BUTTONS];
void button_reading();
unsigned char is_button_pressed(unsigned char index);

#include "main.h"
//unsigned char is_button_pressed_1s(unsigned char index);


#endif /* INC_INPUT_READING_H_ */
