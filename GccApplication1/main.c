/*
 * GccApplication1.c
 *
 * Created: 13/09/2022 06:38:49 م
 * Author : Nour Soft
 */ 
#define TOG_BIT(VAR,BITNO) (VAR) ^=  (1 << (BITNO))
#include "tybedf.h"
#include "MCAL/DIO/register.h"

#include "MCAL/TIMER/interfas.h"

#include "HAL/LDE/interfas.h"
#include "HAL/BOTTON/interfas.h"
int main(void)
{intin_timer(0);
		 imp_Botton('D',0);
    /* Replace with your application code */
    while (1) 
    {imp_LDE_HIGH('C',0);
	imp_LDE_HIGH('C',1);
	 imp_LDE_LOW('C',2);
	 imp_LDE_LOW('C',3);
	 imp_LDE_LOW('C',4);
	 imp_LDE_LOW('C',5);
uint8_8 x;
long long ove=0;
while((ove<78125)){
	x=((PIND) >> (0) & 1);
	if(x==1)
	break;
	TCCR0 |=(1<<0);
	while((TIFR &(1<<0))==0);
	TIFR |=(1<<0);
	TCCR0=0;
	ove++;
};
ove=0;
x=0;

	 imp_LDE_HIGH('C',2);
	 imp_LDE_HIGH('C',3);
	 imp_LDE_LOW('C',0);
	 imp_LDE_LOW('C',1);
	 imp_LDE_LOW('C',4);
	 imp_LDE_LOW('C',5);
	 uint8_8 i=0;
	 while(i<10){
		 
		 
while((ove<7812)){
	
	TCCR0 |=(1<<0);
	while((TIFR &(1<<0))==0);
	TIFR |=(1<<0);
	TCCR0=0;
	ove++;
};
ove=0;
i++;
TOG_BIT(PORTC,2);
TOG_BIT(PORTC,3);
};
i=0;
	  imp_LDE_HIGH('C',4);
	  imp_LDE_HIGH('C',5);
	  imp_LDE_LOW('C',0);
	  imp_LDE_LOW('C',1);
	  imp_LDE_LOW('C',2);
	  imp_LDE_LOW('C',3);
	  while(ove<78125){
		  
		  x=((PIND) >> (0) & 1);
		  if(x==1)
		  break;
		  TCCR0 |=(1<<0);
		  while((TIFR &(1<<0))==0);
		  TIFR |=(1<<0);
		  TCCR0=0;
		  ove++;
	  };
	  ove=0;
	  if(x==1){
		  time_delay(78125);
	  };
	 x=0;
	 
	 imp_LDE_HIGH('C',2);
	 imp_LDE_HIGH('C',3);
	 imp_LDE_LOW('C',0);
	 imp_LDE_LOW('C',1);
	 imp_LDE_LOW('C',4);
	 imp_LDE_LOW('C',5);
	 	 while(i<10){
		 	 
		 	 
		 	 while((ove<7812)){
			 	 
			 	 TCCR0 |=(1<<0);
			 	 while((TIFR &(1<<0))==0);
			 	 TIFR |=(1<<0);
			 	 TCCR0=0;
			 	 ove++;
		 	 };
		 	 ove=0;
i++;
		 	 TOG_BIT(PORTC,2);
		 	 TOG_BIT(PORTC,3);
	 	 }
	  };
    };


