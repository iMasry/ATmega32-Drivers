/***********************************************************/
/******** Title       : DIO_private                *********/
/******** File Name   : DIO_private.h              *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 5/8/2022                   *********/
/******** version     : 1.0 V                      *********/
/******** Description : DIO registers Addresses    *********/
/******** Compiler    : GNU AVR Cross Compiler     *********/
/******** Target      : Atmega32 Micro-controller  *********/
/***********************************************************/

/********************************************/
/*  guard of file will call one time in .c  */
/********************************************/
#ifndef INCLUDE_MCAL_DIO_PRIVATE_H_
#define INCLUDE_MCAL_DIO_PRIVATE_H_

/********************************************/
/*           Registers Addresses            */
/********************************************/
#define PORTA_REG (*(volatile u8 *)0x3B)
#define DDRA_REG  (*(volatile u8 *)0x3A)
#define PINA_REG  (*(volatile u8 *)0x39)

#define PORTB_REG (*(volatile u8 *)0x38)
#define DDRB_REG  (*(volatile u8 *)0x37)
#define PINB_REG  (*(volatile u8 *)0x36)

#define PORTC_REG (*(volatile u8 *)0x35)
#define DDRC_REG  (*(volatile u8 *)0x34)
#define PINC_REG  (*(volatile u8 *)0x33)

#define PORTD_REG (*(volatile u8 *)0x32)
#define DDRD_REG  (*(volatile u8 *)0x31)
#define PIND_REG  (*(volatile u8 *)0x30)

#endif /* INCLUDE_MCAL_DIO_PRIVATE_H_ */
