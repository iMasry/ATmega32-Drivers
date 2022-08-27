/***********************************************************/
/******** Title       : Main                       *********/
/******** File Name   : main.c                     *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 19/8/2022                  *********/
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

#include <util/delay.h>
#define F_CPU 8000000UL


void main(void)
{
	MDIO_voidInit();
	HLCD_voidInit();
	HLCD_voidSendString("  Welcome Maged");
	while(1)
	{
	}
}
