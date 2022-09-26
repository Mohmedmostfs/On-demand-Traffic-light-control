/*
 * program.c
 *
 * Created: 13/09/2022 06:52:27 م
 *  Author: Nour Soft
 */ 
#include "../../tybedf.h"
#include "register_timer.h"
void intin_timer(uint8_8 intialis){
	//impelemntion timer0
	TCCR0=0x00;
	//The initial value in the timer0
	TCNT0=intialis;

	
};
void time_delay(long long overlode){
	
	intin_timer(0);
	for(long long ove=0;ove<overlode;ove++){
		//start timer0
		TCCR0 |=(1<<0);
		while((TIFR &(1<<0))==0);
		//Choisissez le mode de fonctionnement
		TIFR |=(1<<0);
		//stop timre0
		TCCR0=0;
	};
	
}