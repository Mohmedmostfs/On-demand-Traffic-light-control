/*
 * interfas.h
 *
 * Created: 13/09/2022 07:11:08 م
 *  Author: Nour Soft
 */ 

#ifndef INTERFAS_LED_H_
#define INTERFAS_LED_H_

typedef enum LEDError
{
	OK_LED, WRONG_HIGH, WRONG_LOW
}LEDError;
LEDError imp_LDE_HIGH(uint8_8 PORT,uint8_8 PIN);

LEDError imp_LDE_LOW(uint8_8 PORT,uint8_8 PIN);
#endif /* INTERFAS_H_ */