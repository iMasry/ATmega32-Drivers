/***********************************************************/
/******** Title       : Main                       *********/
/******** File Name   : main.c                     *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 20/8/2022                   *********/
/******** version     : 1.0 V                      *********/
/******** Description : main source code           *********/
/******** Compiler    : GNU AVR Cross Compiler     *********/
/******** Target      : Atmega32 Micro-controller  *********/
/***********************************************************/

#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#include"../Include/MCAL/DIO/DIO_interface.h"
#include"../Include/MCAL/DIO/DIO_private.h"
#include"../Include/MCAL/DIO/DIO_configurations.h"

#include "../Include/HAL/LCD/LCD_interface.h"
#include "../Include/HAL/LCD/LCD_private.h"
#include "../Include/HAL/LCD/LCD_configurations.h"

#include "../Include/HAL/KEYPAD/KEYPAD_interface.h"
#include "../Include/HAL/KEYPAD/KEYPAD_private.h"
#include "../Include/HAL/KEYPAD/KEYPAD_configurations.h"

#include <util/delay.h>
#define F_CPU 8000000UL


void main(void)
{
	MDIO_voidInit();
	HLCD_voidInit();
	u8 local_u8Value;
	while(1)
	{
		local_u8Value = HKEYPAD_u8GetPressedKey();

		if(local_u8Value != KEY_NOT_PRESSED)
		{
			HLCD_voidSendData(local_u8Value);
		}
	}
}
