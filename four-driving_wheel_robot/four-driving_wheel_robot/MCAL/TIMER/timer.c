/*
 * timer.c
 *
 * Created: 4/6/2023 11:14:21 PM
 *  Author: MOHAMED ABDELSALAM
 */ 

#include "timer.h"


void TIMER_init (uint8_t Mode,uint8_t intial_value){
//choose timer mode
TCCR0 &= Mode;
//TimerSet initial value
TCNT0 = intial_value;
}
void TIMER_start (uint8_t prescaler_value){

TCCR0 |= prescaler_value;  //Set Pre_scaler, for ex:ck(source)/1 to get,
//T(tick) = 1 microseconds
//Stop after one overflow 256 microseconds
}
void TIMER_set(uint8_t intial_value){
//TimerSet initial value
TCNT0 = intial_value;
}
void TIMER_getStatus(uint8_t *value){
	if ((TIFR & clear) == 0)
	{
		*value = 0x01;
	}
	else if ((TIFR & clear) == 1)
	{
		*value = 0x00;
		TIFR |= clear;
	}
}
	void TIMER_Stop (void){
		//Timer Stop
		TCCR0 = no_clk;	
	}
void Delay(uint32_t milliseconds)
{
	TIMER_init (normal,Intial_value);
	TIMER_start (pres_1);
	uint32_t i;
	uint8_t counter;
	
	for(i=0;i< milliseconds ;i++){
	
	// N = (1000us)/(256u);  //=3.9 by approx. it will 3
	// n = ((1000us)-(3numovflow)*(256us))/(1us)  // = 66 ticks
	//for one millisecond delay iterate 3 times of timer overflow and 232 ticks
	counter = 0;
	while(counter<3){
		
		while((TIFR & clear) == 0);
		TIFR |= clear;
		counter++;
	}
	// instructions time between setting ticks and timer starting count from last overflow is 16us
	TIMER_set(ticks_214);  // 232ticks - 18us =214ticks, so substitute by 214ticks instead of 232ticks
	while ((TIFR & clear) == 0);
	TIFR |= clear;
	}
	TIMER_Stop ();
}
