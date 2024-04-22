/*
 * motor.c
 *
 * Created: 28/02/2024 20:40:56
 *  Author: PC
 */ 
#include "DIO/DIO_interface.h"


#include "MOTOR_interface.h"

void MOTOR_init(void){
	DIO_pinMode(MOTOR_A1,OUTPUT);
	DIO_pinMode(MOTOR_B1,OUTPUT);
	DIO_pinMode(MOTOR_A2,OUTPUT);
	DIO_pinMode(MOTOR_B2,OUTPUT);
	DIO_pinMode(ENABLE_A,OUTPUT);
	DIO_pinMode(ENABLE_B,OUTPUT);
	
	//enable motors
	DIO_digitalWrite(ENABLE_A,HIGH);
	DIO_digitalWrite(ENABLE_B,HIGH);
}

void MOTOR_forward(void){
	DIO_digitalWrite(MOTOR_A1,HIGH);
	DIO_digitalWrite(MOTOR_B1,LOW);
	DIO_digitalWrite(MOTOR_A2,HIGH);
	DIO_digitalWrite(MOTOR_B2,LOW);
}
void MOTOR_backward(void){
	DIO_digitalWrite(MOTOR_A1,LOW);
	DIO_digitalWrite(MOTOR_B1,HIGH);
	DIO_digitalWrite(MOTOR_A2,LOW);
	DIO_digitalWrite(MOTOR_B2,HIGH);
}
void MOTOR_turnRight(void){
	DIO_digitalWrite(MOTOR_A1,LOW);
	DIO_digitalWrite(MOTOR_B1,LOW);
	DIO_digitalWrite(MOTOR_A2,HIGH);
	DIO_digitalWrite(MOTOR_B2,LOW);
}
void MOTOR_turnLeft(void){
	DIO_digitalWrite(MOTOR_A1,HIGH);
	DIO_digitalWrite(MOTOR_B1,LOW);
	DIO_digitalWrite(MOTOR_A2,LOW);
	DIO_digitalWrite(MOTOR_B2,LOW);
}
void MOTOR_stop(void){
	DIO_digitalWrite(MOTOR_A1,LOW);
	DIO_digitalWrite(MOTOR_B1,LOW);
	DIO_digitalWrite(MOTOR_A2,LOW);
	DIO_digitalWrite(MOTOR_B2,LOW);
}
