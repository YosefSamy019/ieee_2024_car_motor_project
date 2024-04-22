/*
 * motor.h
 *
 * Created: 28/02/2024 20:47:41
 *  Author: PC
 */ 


#ifndef MOTOR_H_
#define MOTOR_H_

#define ENABLE_A PIN_D7
#define ENABLE_B PIN_D6

#define MOTOR_A1 PIN_C0
#define MOTOR_B1 PIN_C1
#define MOTOR_A2 PIN_C2
#define MOTOR_B2 PIN_C3

#define BUTTON_PRESSED 1

void MOTOR_init(void);
void MOTOR_forward(void);
void MOTOR_backward(void);
void MOTOR_turnRight(void);
void MOTOR_turnLeft(void);
void MOTOR_stop(void);

#endif /* MOTOR_H_ */