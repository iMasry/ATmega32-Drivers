/***********************************************************/
/******** Title       : Main                       *********/
/******** File Name   : main.c                     *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 5/8/2022                   *********/
/******** version     : 1.0 V                      *********/
/******** Description : DIO run code               *********/
/******** Compiler    : GNU AVR Cross Compiler     *********/
/******** Target      : Atmega32 Micro-controller  *********/
/***********************************************************/

#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#include"../Include/MCAL/DIO/DIO_interface.h"
#include"../Include/MCAL/DIO/DIO_private.h"
#include"../Include/MCAL/DIO/DIO_configurations.h"

#include <util/delay.h>
#define F_CPU 8000000UL


void main(void)
{
	MDIO_voidInit();
	while(1)
	{
	}
}
