/****************************************************************/
/******** Title       : KEYPAD_configurations           *********/
/******** File Name   : KEYPAD_configurations.h         *********/
/******** Author      : Maged Elmasry                   *********/
/******** Date        : 19/8/2022                       *********/
/******** version     : 1.0 V                           *********/
/******** Description : KEYPAD list of configurations   *********/
/******** Compiler    : GNU AVR Cross Compiler          *********/
/******** Target      : Atmega32 Micro-controller       *********/
/****************************************************************/

/****************************************************/
/*      guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_HAL_KEYPAD_KEYPAD_CONFIGURATIONS_H_
#define INCLUDE_HAL_KEYPAD_KEYPAD_CONFIGURATIONS_H_

/* SET KEYPAD PORT */
#define KEYPAD_PORT PORTC
/* SET KEYPAD ROWS PINS */
#define ROW_PINS {PIN0, PIN1, PIN2, PIN3}
/* SET KEYPAD COLUMNS PINS */
#define COL_PINS {PIN4, PIN5, PIN6, PIN7}

/* SET Number of KEYPAD ROWS */
#define ROWS_NUMBER 4
/* SET Number of KEYPAD COLUMNS */
#define COLS_NUMBER 4

/* SET KEYPAD KEYS VALUE */
#define KEYPAD_KEYS {{'1','2','3','+'},\
					 {'4','5','6','-'},\
					 {'7','8','9','*'},\
					 {'C','0','=','/'}}

/* SET KEYPAD KEY NOTFOUND VALUE */
#define KEY_NOT_PRESSED 255

/* SET KEYPAD KEYS DEBOUNCING TIME */
#define DEBOUNCING_DELAY 150

#endif /* INCLUDE_HAL_KEYPAD_KEYPAD_CONFIGURATIONS_H_ */
