/*
 * Motors.h
 *
 * Created: 4/11/2023 6:09:10 AM
 *  Author: ebrahem
 */ 


#ifndef MOTORS_H_
#define MOTORS_H_
#include "../MCAL/DIO_Interface.h"

void motors_init( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B );

void motors_forward( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B );

void motors_Backward( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B );

void motors_right( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B );

void motors_left( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B );

void motors_stop( PIn_name pin_motor1_F , PIn_name pin_motor1_B ,PIn_name pin_motor2_F, PIn_name pin_motor2_B );

#endif /* MOTORS_H_ */
