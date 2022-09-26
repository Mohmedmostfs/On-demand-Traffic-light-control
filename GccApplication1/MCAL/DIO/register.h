/*
 * register.h
 *
 * Created: 13/09/2022 06:42:20 م
 *  Author: Nour Soft
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_

/* Group A Registers */
#define PORTA  *((volatile uint8_8*)0x3B)
#define DDRA   *((volatile uint8_8*)0x3A)
#define PINA  *((volatile uint8_8*)0x39)

/* Group B Registers */
#define PORTB  *((volatile uint8_8*)0x38)
#define DDRB   *((volatile uint8_8*)0x37)
#define PINB  *((volatile uint8_8*)0x36)

/* Group C Registers */
#define PORTC  *((volatile uint8_8*)0x35)
#define DDRC  *((volatile uint8_8*)0x34)
#define PINC  *((volatile uint8_8*)0x33)

/* Group D Registers */
#define PORTD *((volatile uint8_8*)0x32)
#define DDRD   *((volatile uint8_8*)0x31)
#define PIND   *((volatile uint8_8*)0x30)










#endif /* REGISTER_H_ */