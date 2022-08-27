/***********************************************************/
/******** Title       : LCD_private                *********/
/******** File Name   : LCD_private.h              *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 19/8/2022                  *********/
/******** version     : 1.1 V                      *********/
/******** Description : LCD Addresses and macros   *********/
/******** Compiler    : GNU AVR Cross Compiler     *********/
/******** Target      : Atmega32 Micro-controller  *********/
/***********************************************************/

/****************************************************/
/*      guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_HAL_LCD_LCD_PRIVATE_H_
#define INCLUDE_HAL_LCD_LCD_PRIVATE_H_

/********************************************/
/*              Rows Addresses              */
/********************************************/
#define LCD_ROW1_ADDRESS 127
#define LCD_ROW2_ADDRESS 191

#define EIGHT_BIT_MODE  0
#define FOUR_BIT_MODE   1

#define LCD_ROW_ONE 1
#define LCD_ROW_TWO 2

#define FUNTION_INIT 0b00000010
#define NULL	     0b00000000

#endif /* INCLUDE_HAL_LCD_LCD_PRIVATE_H_ */
