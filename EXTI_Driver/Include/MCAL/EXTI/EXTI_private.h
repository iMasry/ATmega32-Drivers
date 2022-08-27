/***********************************************************/
/******** Title       : EXTI_private               *********/
/******** File Name   : EXTI_private.h             *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 24/8/2022                  *********/
/******** version     : 1.0 V                      *********/
/******** Description : EXTI registers Addresses   *********/
/******** Compiler    : GNU AVR Cross Compiler     *********/
/******** Target      : Atmega32 Micro-controller  *********/
/***********************************************************/

/****************************************************/
/*      Guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_MCAL_EXTI_EXTI_PRIVATE_H_
#define INCLUDE_MCAL_EXTI_EXTI_PRIVATE_H_

/********************************************/
/*           Registers Addresses            */
/********************************************/
#define MCUCR  (*(volatile u8 *)0x55)
#define MCUCSR (*(volatile u8 *)0x54)

#define GICR (*(volatile u8 *)0x5B)
#define GIFR (*(volatile u8 *)0x5A)

/********************************************/
/*          Macros to use in code           */
/********************************************/
#define SENSE_MODE_MASK 0b11
#define EXTI0_SENSE_B1  0
#define EXTI1_SENSE_B1  2
#define EXTI2_SENSE_B1  6

#define EXIT0_ENABLE_BIT 6
#define EXIT1_ENABLE_BIT 7
#define EXIT2_ENABLE_BIT 5

#define EXIT0_FLAG_BIT 6
#define EXIT1_FLAG_BIT 7
#define EXIT2_FLAG_BIT 5

#endif /* INCLUDE_MCAL_EXTI_EXTI_PRIVATE_H_ */
