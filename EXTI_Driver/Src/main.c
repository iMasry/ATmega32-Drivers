/***********************************************************/
/******** Title       : Main                       *********/
/******** File Name   : main.c                     *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 26/8/2022                  *********/
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

#include"../Include/MCAL/GI/GI_interface.h"
#include"../Include/MCAL/GI/GI_private.h"
#include"../Include/MCAL/GI/GI_configurations.h"

#include"../Include/MCAL/EXTI/EXTI_interface.h"
#include"../Include/MCAL/EXTI/EXTI_private.h"
#include"../Include/MCAL/EXTI/EXTI_configurations.h"

#include <util/delay.h>
#define F_CPU 8000000UL

void TOGGLE_LED(void);

void main(void)
{
	MDIO_voidInit();
	MGI_voidEnable();
	MEXTI_voidConfig(EXTI0, FALLING_EDGE);
	MEXTI_voidEnable(EXTI0);
	MEXTI_voidSetCallBack(EXTI0, TOGGLE_LED);
	while(1)
	{
	}
}

void TOGGLE_LED(void)
{
	static local_u8Flag = 0;
	if(local_u8Flag == 0)
	{
		MDIO_voidSetPinValue(PORTA,PIN0,PIN_HIGH);
		local_u8Flag = 1;
	}
	else
	{
		MDIO_voidSetPinValue(PORTA,PIN0,PIN_LOW);
		local_u8Flag = 0;
	}
}
