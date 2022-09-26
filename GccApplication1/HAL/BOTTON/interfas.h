/*
 * interfas.h
 *
 * Created: 13/09/2022 07:53:32 م
 *  Author: Nour Soft
 */ 


#ifndef INTERFAS_botton_H_
#define INTERFAS_botton_H_

typedef enum bottonError
{
	OK_botton, WRONG_botton, WRONG_botton_pullup
}bottonError;

bottonError imp_Botton(uint8_8 PORT,uint8_8 PIN);

bottonError imp_Botton_pullup(uint8_8 PORT,uint8_8 PIN);


#endif /* INTERFAS_H_ */