/*
 * LED_INTERFACE.h
 *
 * Created: 19/02/2024 07:06:06 
 *  Author: hp
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#define LED_0 PIN_A0
#define LED_1 PIN_A1
#define LED_2 PIN_A2

void LED_init(u8 led_no);
void LED_on(u8 led_no);
void LED_off(u8 led_no);


#endif /* LED_INTERFACE_H_ */