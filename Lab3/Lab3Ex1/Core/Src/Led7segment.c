/*
 * Led7segment.c
 *
 *  Created on: Nov 10, 2023
 *      Author: hoang
 */
#include "main.h"
#include "Led7segment.h"
void displaySeg7(int count_time){
	switch(count_time){
			case 0:{
					  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,0);
					  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,0);
					  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,0);
					  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,0);
					  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,0);
					  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,1);
					  break ;
					  };
			  case 1:{
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,1);
				  break ;
				  };
			  case 2:{
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,0);
				   break ;
			  };
			  case 3: {
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,0);
				  break;
			  };
			  case 4:{
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,0);
				  break;
			  };
			  case 5:{
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,0);


				  break;
			  };
			  case 6:{
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,0);
				  break;
			  };
			  case 7:{
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,1);

				  break;
			  };
			  case 8:{
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,0);
						  break;
			  };
			  case 9:{
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_4,1);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_0,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_1,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_2,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_3,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_5,0);
				  HAL_GPIO_WritePin(LED7PORT,GPIO_PIN_6,0);

				  break;
			  };

			  };

}
