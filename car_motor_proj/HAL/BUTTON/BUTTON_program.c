/*
 * Button_Program.c
 *
 * Created: 29/02/2024 08:50:26 م
 *  Author: hp
 */ 
#include "STD_TYPES.h"
#include "DIO/DIO_INTERFACE.h"

#include "BUTTON_interface.h"

void BUTTON_init(u8 but_no)
{
	DIO_pinMode(but_no,INPUT);
}

u8 BUTTON_read(u8 but_no)
{
	return DIO_digitalRead(but_no);
}

