/***********************************************************/
/******** Title       : GI_private                 *********/
/******** File Name   : GI_private.h               *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 26/8/2022                  *********/
/******** version     : 1.0 V                      *********/
/******** Description : GI register Address        *********/
/******** Compiler    : GNU AVR Cross Compiler     *********/
/******** Target      : Atmega32 Micro-controller  *********/
/***********************************************************/

/****************************************************/
/*      Guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_MCAL_GI_GI_PRIVATE_H_
#define INCLUDE_MCAL_GI_GI_PRIVATE_H_

/********************************************/
/*           Registers Addresses            */
/********************************************/
#define SREG (*(volatile u8 *)0x5F)

/********************************************/
/*           Macro to use in code           */
/********************************************/
#define GLOBAL_INTERRUPT_ENABLE_BIT 7

#endif /* INCLUDE_MCAL_GI_GI_PRIVATE_H_ */
