/*
 * program.c
 *
 * Created: 13/09/2022 07:02:30 م
 *  Author: Nour Soft
 */ 
#include "../../tybedf.h"
#include "../../MCAL/DIO/interfas.h"
#include "interfas.h"
LEDError imp_LDE_HIGH(uint8_8 PORT,uint8_8 PIN){
	uint8_8 x,y;
x=	DIO_initpin( PORT,PIN,1);

y=	DIO_PinValue(PORT,PIN,1);
	x=x+y;
	if (x==0)
	return OK_LED;
	else
	return WRONG_HIGH;
}
LEDError imp_LDE_LOW(uint8_8 PORT,uint8_8 PIN){
	uint8_8 x,y;
x=	DIO_initpin(PORT,PIN,1);

y=	DIO_PinValue(PORT,PIN,0);
	x=x+y;
	if (x==0)
	return OK_LED;
	else
	return WRONG_LOW;
}