/***************************************************************/
/******** Title       : KEYPAD_interface               *********/
/******** File Name   : KEYPAD_interface.h             *********/
/******** Author      : Maged Elmasry                  *********/
/******** Date        : 20/8/2022                      *********/
/******** version     : 1.0 V                          *********/
/******** Description : KEYPAD functions prototype     *********/
/******** Compiler    : GNU AVR Cross Compiler         *********/
/******** Target      : Atmega32 Micro-controller      *********/
/***************************************************************/

/****************************************************/
/*      guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_HAL_KEYPAD_KEYPAD_INTERFACE_H_
#define INCLUDE_HAL_KEYPAD_KEYPAD_INTERFACE_H_

/***********************************************************************************/
/*Function       : HKEYPAD_u8GetPressedKey                                         */
/*I/P Parameters : no input parameters                                             */
/*Returns        : returns u8 KeyValue                                             */
/*Description    : Initialize keypad and return with the pressed key value         */
/***********************************************************************************/
u8 HKEYPAD_u8GetPressedKey(void);

#endif /* INCLUDE_HAL_KEYPAD_KEYPAD_INTERFACE_H_ */
