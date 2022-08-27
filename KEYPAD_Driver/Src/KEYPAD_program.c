/***********************************************************/
/******** Title       : KEYPAD_program             *********/
/******** File Name   : KEYPAD_program.c           *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 20/8/2022                  *********/
/******** version     : 1.0 V                      *********/
/******** Description : KEYPAD Implementation      *********/
/******** Compiler    : GNU AVR Cross Compiler     *********/
/******** Target      : Atmega32 Micro-controller  *********/
/***********************************************************/

#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#include"../Include/MCAL/DIO/DIO_interface.h"
#include"../Include/MCAL/DIO/DIO_private.h"
#include"../Include/MCAL/DIO/DIO_configurations.h"

#include "../Include/HAL/KEYPAD/KEYPAD_interface.h"
#include "../Include/HAL/KEYPAD/KEYPAD_private.h"
#include "../Include/HAL/KEYPAD/KEYPAD_configurations.h"

#include <util/delay.h>
#define F_CPU 8000000UL

u8 KEYPAD_Au8Keys[ROWS_NUMBER][COLS_NUMBER] = KEYPAD_KEYS;

u8 KEYPAD_Au8RowsPins[ROWS_NUMBER] = ROW_PINS;
u8 KEYPAD_Au8ColsPins[COLS_NUMBER] = COL_PINS;

u8 HKEYPAD_u8GetPressedKey(void)
{
	u8 local_u8RowCounter, local_u8ColCounter, local_u8PinValue, local_u8KeyValue = KEY_NOT_PRESSED, local_u8Flag = FLAG_DOWN;

	for(local_u8RowCounter = LOOP_START; local_u8RowCounter < ROWS_NUMBER; local_u8RowCounter++)
	{
		/* Activate One Row */
		MDIO_voidSetPinValue(KEYPAD_PORT, KEYPAD_Au8RowsPins[local_u8RowCounter], PIN_LOW);
		for(local_u8ColCounter = LOOP_START; local_u8ColCounter < COLS_NUMBER; local_u8ColCounter++)
		{
			/* Check key Value */
			local_u8PinValue = MDIO_u8GetPinValue(KEYPAD_PORT, KEYPAD_Au8ColsPins[local_u8ColCounter]);
			/* Check if Key Pressed */
			if(local_u8PinValue == KEY_PRESSED)
			{
				/* Debouncing Effect Delay */
				_delay_ms(DEBOUNCING_DELAY);
				/* Check Pressed Again */
				local_u8PinValue = MDIO_u8GetPinValue(KEYPAD_PORT, KEYPAD_Au8ColsPins[local_u8ColCounter]);
				while(local_u8PinValue == KEY_PRESSED)
				{
					/* Check Continuous Press to read as only one time */
					local_u8PinValue = MDIO_u8GetPinValue(KEYPAD_PORT, KEYPAD_Au8ColsPins[local_u8ColCounter]);
				}
				/* Save the pressed key value */
				local_u8KeyValue = KEYPAD_Au8Keys[local_u8RowCounter][local_u8ColCounter];
				local_u8Flag = FLAG_UP;
				break;
			}
		}
		/* Reactivate Row Again*/
		MDIO_voidSetPinValue(KEYPAD_PORT, KEYPAD_Au8RowsPins[local_u8RowCounter], PIN_HIGH);
		/* Check FLAG */
		if(local_u8Flag == FLAG_UP)
		{
			break;
		}
	}
	/* Return with Pressed Key */
	return local_u8KeyValue;
}

