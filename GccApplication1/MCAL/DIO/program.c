/*
 * program.c
 *
 * Created: 13/09/2022 06:45:37 م
 *  Author: Nour Soft
 */ #include "register.h"
#include "../../tybedf.h"
#include "interfas.h"
DIOError DIO_initpin(uint8_8 PortName,uint8_8 PinName,uint8_8 Diriction){
	switch(PortName){
		//choos porta wont implemntation 
		case'A':
		//ask wont impot or ouput
		if(Diriction==1){
			//output
		DDRA |=(1<<PinName);}
		else if(Diriction==0){
			//input
		DDRA &=~(1<<PinName);};
		return OK_DIO;
		break;
		//choos portb wont implemntation 
		case'B':
		//ask wont impot or ouput
		if(Diriction==1){
			//output
		DDRB |=(1<<PinName);}
		//input
		else if(Diriction==0){
		DDRB &=~(1<<PinName);}
		return OK_DIO;
		break;
		//choos portc wont implemntation 
		case'C':
		//ask wont impot or ouput
		if(Diriction==1){
			//output
		DDRC |=(1<<PinName);}
		//input
		else if(Diriction==0){
		DDRC &=~(1<<PinName);}
		return OK_DIO;
		break;
		//choos portd wont implemntation 
		case'D':
		//ask wont impot or ouput
		if(Diriction==1){
			//output
		DDRD |=(1<<PinName);}
		//input
		else if(Diriction==0){
		DDRD &=~(1<<PinName);}
		return OK_DIO;
	break;
	
	default:
	return WRONG_INITPIN;
	}
}


DIOError DIO_PinValue(uint8_8 PortName,uint8_8 PinName,uint8_8 Value){
	switch(PortName){
		//choos porta wont give valu
		case'A':
		//high
		if(Value==1){
		PORTA |=(1<<PinName);}
		else if(Value==0){
			//low
		PORTA &=~(1<<PinName);};
			return OK_DIO;
		break;
			//choos portb wont give valu
		case'B':
		if(Value==1){
			//high
		PORTB |=(1<<PinName);}
		else if(Value==0){
			//low
		PORTB &=~(1<<PinName);}
			return OK_DIO;
		break;
			//choos portc wont give valu
		case'C':
		if(Value==1){
			//high
		PORTC |=(1<<PinName);}
		else if(Value==0){
			//low
		PORTC &=~(1<<PinName);}
			return OK_DIO;
		break;
			//choos portd wont give valu
		case'D':
		if(Value==1){
			//high
		PORTD |=(1<<PinName);}
		else if(Value==0){
			//low
		PORTD &=~(1<<PinName);}
			return OK_DIO;
	break;
	
	default:
	return WRONG_PINVALUE;}
};
