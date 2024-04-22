/*
 * Button_Interface.h
 *
 * Created: 29/02/2024 08:51:01 م
 *  Author: hp
 */ 


#ifndef BUTTON_INTERFACE_H_
#define BUTTON_INTERFACE_H_

#define BUT_0 PIN_B0
#define BUT_1 PIN_B1
#define BUT_2 PIN_B2
#define BUT_3 PIN_B3
#define BUT_4 PIN_B4

void BUTTON_init(u8 but_no);
u8 BUTTON_read(u8 but_no);

#endif /* BUTTON_INTERFACE_H_ */