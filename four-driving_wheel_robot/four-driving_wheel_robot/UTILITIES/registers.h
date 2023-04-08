/*
 * registers.h
 *
 * Created: 4/6/2023 11:32:40 PM
 *  Author: MOHAMED ABDELSALAM
 */ 
#include "typedefs.h"

#ifndef REGISTERS_H_
#define REGISTERS_H_



/******************************************************************************/
// Timer0 Registers
/******************************************************************************/
#define TIFR *((volatile uint8_t*)0x58)
#define TCCR0 *((volatile uint8_t*)0x53)
#define TCNT0 *((volatile uint8_t*)0x52)
#endif /* REGISTERS_H_ */