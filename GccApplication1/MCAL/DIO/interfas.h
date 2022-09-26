/*
 * interfas.h
 *
 * Created: 13/09/2022 06:49:23 م
 *  Author: Nour Soft
 */ 

#include "register.h"
#include "../../tybedf.h"
#ifndef INTERFAS_DIO_H_
#define INTERFAS_DIO_H_

typedef enum DIOError
{
	OK_DIO, WRONG_INITPIN, WRONG_PINVALUE
}DIOError;

DIOError DIO_initpin(uint8_8 PortName,uint8_8 PinName,uint8_8 Diriction);



DIOError DIO_PinValue(uint8_8 PortName,uint8_8 PinName,uint8_8 Value);


#endif /* INTERFAS_H_ */