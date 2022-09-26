/*
 * program.c
 *
 * Created: 13/09/2022 07:48:01 م
 *  Author: Nour Soft
 */ 

#include "../../MCAL/DIO/interfas.h"
#include "../../tybedf.h"
#include "interfas.h"
bottonError imp_Botton(uint8_8 PORT,uint8_8 PIN){
uint8_8 x;	
x=	DIO_initpin( PORT,PIN,0);
if (x==0)
return OK_botton;
else 
return WRONG_botton;
}
bottonError imp_Botton_pullup(uint8_8 PORT,uint8_8 PIN){
uint8_8 x,y;	
x=	DIO_initpin( PORT,PIN,0);

y= DIO_PinValue(PORT,PIN,1);
x=x+y;

if (x==0)
return OK_botton;
else
return WRONG_botton_pullup;
}
