/************************************************************/
/******** Title       : LCD_configurations          *********/
/******** File Name   : LCD_configurations.h        *********/
/******** Author      : Maged Elmasry               *********/
/******** Date        : 19/8/2022                   *********/
/******** version     : 1.2 V                       *********/
/******** Description : LCD list of configurations  *********/
/******** Compiler    : GNU AVR Cross Compiler      *********/
/******** Target      : Atmega32 Micro-controller   *********/
/************************************************************/

/****************************************************/
/*      guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_HAL_LCD_LCD_CONFIGURATIONS_H_
#define INCLUDE_HAL_LCD_LCD_CONFIGURATIONS_H_

/************************************************/
/*                  LCD_MODE:                   */
/*        EIGHT_BIT_MODE - FOUR_BIT_MODE        */
/************************************************/
#define LCD_MODE EIGHT_BIT_MODE

/************************************************/
/*                  LCD PORTS                   */
/************************************************/
#define LCD_DATA_PORT 	PORTA
#define LCD_COTROL_PORT PORTB

/************************************************/
/*               LCD CONTROL PINS               */
/************************************************/
#define RS_PIN PIN0
#define RW_PIN PIN1
#define E_PIN  PIN2

/************************************************/
/*         DISPLAY CONTROL INSTRUCTIONS         */
/************************************************/

/************************************************/
/*                 FUNTION_SET                  */
/************************************************/
/*        DB3: Sets the number of lines         */
/*             B3: 0 1 line display             */
/*             B3: 1 2 line display             */
/************************************************/
/*         DB2: Sets the character font         */
/*                B2: 0 5x7  dots               */
/*                B2: 1 5x10 dots               */
/************************************************/
#define FUNTION_SET    0b00111100
/************************************************/
/*                DISPLAY_ON_OFF                */
/************************************************/
/*         B2: Sets the display ON/OFF          */
/*             B2: 0 display is OFF             */
/*             B2: 1 display is ON              */
/************************************************/
/*          B1: Sets the cursor display         */
/*           B1: 0 cursor not display           */
/*           B1: 1 the cursor display           */
/************************************************/
/*           B0: Sets the cursor blinks         */
/*             B0: 0 cursor not blink           */
/*             B0: 1 the cursor blink           */
/************************************************/
#define DISPLAY_ON_OFF 0b00001111
/************************************************/
/*                 DISPLAY_CLEAR                */
/************************************************/
#define DISPLAY_CLEAR  0b00000001
/************************************************/
/*                ENTRY_MODE_SET                */
/************************************************/
/*        B1: Sets cursor move direction        */
/*          B1: 0 cursor move to right          */
/*          B1: 1 cursor move to left           */
/************************************************/
/*         B0: Shifts the entire display        */
/*              B0: 0 shift is OFF              */
/*              B0: 1 shift is ON               */
/************************************************/
#define ENTRY_MODE_SET 0b00000110

#endif /* INCLUDE_HAL_LCD_LCD_CONFIGURATIONS_H_ */
