/*
 * car_motor_proj.c
 *
 * Created: 2024-03-01 5:28:08 PM
 * Author : asus
 */ 

/*		Delay		*/
#define F_CPU 1000000ul
#include "avr/delay.h"

/*		LIB		*/
#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"

/*		MCAL		*/
#include "DIO/DIO_interface.h"

/*		HAL		*/
#include "LED/LED_interface.h"
#include "BUTTON/BUTTON_interface.h"
#include "MOTOR/MOTOR_interface.h"

#define LED_TIME 3000

int main(void)
{
	//led counters
	u32 led0Counter = 0;
	u32 led1Counter = 0;
	u32 led2Counter = 0;

	LED_init(LED_0);
	LED_init(LED_1);
	LED_init(LED_2);

	BUTTON_init(BUT_0);
	BUTTON_init(BUT_1);
	BUTTON_init(BUT_2);
	BUTTON_init(BUT_3);
	
	MOTOR_init();

    /* Replace with your application code */
    while (1) 
    {
					
		if(BUTTON_read(BUT_0) == BUTTON_PRESSED){
			//Forward
			led0Counter = 0;
			led1Counter = 0;
			led2Counter = LED_TIME;
			
			MOTOR_forward();

		}else if(BUTTON_read(BUT_1) == BUTTON_PRESSED){
			//Turn left
			led0Counter = 0;
			led1Counter = LED_TIME;
			led2Counter = 0;
			
			MOTOR_turnLeft();
			
		}else if(BUTTON_read(BUT_2) == BUTTON_PRESSED){
			//Turn right
			led0Counter = LED_TIME;
			led1Counter = 0;
			led2Counter = 0;
			
			MOTOR_turnRight();

		}else if(BUTTON_read(BUT_3) == BUTTON_PRESSED){
			//Backward
			led0Counter = LED_TIME;
			led1Counter = LED_TIME;
			led2Counter = 0;
			
			MOTOR_backward();
			
		}else if(BUTTON_read(BUT_4) == BUTTON_PRESSED){
			//Stop
			led0Counter = 0;
			led1Counter = 0;
			led2Counter = 0;
			
			MOTOR_stop();
		}
				
		if(led0Counter>0) LED_on(LED_0);
		else LED_off(LED_0);

		if(led1Counter>0) LED_on(LED_1);
		else LED_off(LED_1);

		if(led2Counter>0) LED_on(LED_2);
		else LED_off(LED_2);
		
		
		if(led0Counter>0) led0Counter--;
		if(led1Counter>0) led1Counter--;
		if(led2Counter>0) led2Counter--;
		_delay_ms(1);
    }
}

