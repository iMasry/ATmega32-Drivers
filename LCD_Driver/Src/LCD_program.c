/***********************************************************/
/******** Title       : LCD_program                *********/
/******** File Name   : LCD_program.c              *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 19/8/2022                  *********/
/******** version     : 1.2 V                      *********/
/******** Description : LCD Implementation         *********/
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

void HLCD_voidSendCommand(u8 A_u8Command)
{
	/* RS --> 0, RW --> 0 */
	MDIO_voidSetPinValue(LCD_COTROL_PORT, RS_PIN, PIN_LOW);
	MDIO_voidSetPinValue(LCD_COTROL_PORT, RW_PIN, PIN_LOW);
	/* Send command to LCD */
	MDIO_voidSetPortValue(LCD_DATA_PORT, A_u8Command);
	/* Set pulse on E_PIN with 2ms delay */
	MDIO_voidSetPinValue(LCD_COTROL_PORT, E_PIN, PIN_HIGH);
	_delay_ms(2);
	MDIO_voidSetPinValue(LCD_COTROL_PORT, E_PIN, PIN_LOW);

}

void HLCD_voidSendData(u8 A_u8Data)
{
	/* RS --> 1, RW --> 0 */
	MDIO_voidSetPinValue(LCD_COTROL_PORT, RS_PIN, PIN_HIGH);
	MDIO_voidSetPinValue(LCD_COTROL_PORT, RW_PIN, PIN_LOW);
	/* Send command to LCD */
	MDIO_voidSetPortValue(LCD_DATA_PORT, A_u8Data);
	/* Set pulse on E_PIN with 2ms delay */
	MDIO_voidSetPinValue(LCD_COTROL_PORT, E_PIN, PIN_HIGH);
	_delay_ms(2);
	MDIO_voidSetPinValue(LCD_COTROL_PORT, E_PIN, PIN_LOW);
}

void HLCD_voidInit(void)
{
	#if LCD_MODE == EIGHT_BIT_MODE
		/* Wait for more than 30ms after VDD rises to 4.5V */
		_delay_ms(30);
		/* Function Set */
		HLCD_voidSendCommand(FUNTION_SET);
		/* Wait for more than 39us */
		_delay_ms(1);
		/* Display ON/OFF Control */
		HLCD_voidSendCommand(DISPLAY_ON_OFF);
		/* Wait for more than 39us */
		_delay_ms(1);
		/* Display Clear */
		HLCD_voidSendCommand(DISPLAY_CLEAR);
		/* Wait for more than 1.53ms */
		_delay_ms(2);
		/* Entry Mode Set */
		HLCD_voidSendCommand(ENTRY_MODE_SET);
	#elif LCD_MODE == FOUR_BIT_MODE
		/* Wait for more than 30ms after VDD rises to 4.5V */
		_delay_ms(30);
		/* Function Set */
		HLCD_voidSendCommand(FUNTION_INIT);
		HLCD_voidSendCommand(FUNTION_INIT);
		HLCD_voidSendCommand(FUNTION_SET);
		/* Wait for more than 39us */
		_delay_ms(1);
		/* Display ON/OFF Control */
		HLCD_voidSendCommand(NULL);
		HLCD_voidSendCommand(DISPLAY_ON_OFF);
		/* Wait for more than 39us */
		_delay_ms(1);
		/* Display Clear */
		HLCD_voidSendCommand(NULL);
		HLCD_voidSendCommand(DISPLAY_CLEAR);
		/* Wait for more than 1.53ms */
		_delay_ms(2);
		/* Entry Mode Set */
		HLCD_voidSendCommand(NULL);
		HLCD_voidSendCommand(ENTRY_MODE_SET);
	#else
		#error  Wrong LCD Mode Configuration
    #endif
}

void HLCD_voidClearDisplay(void)
{
	HLCD_voidSendCommand(NULL);
	HLCD_voidSendCommand(DISPLAY_CLEAR);
	/* Wait for more than 1.53ms */
	_delay_ms(2);
}

void HLCD_voidSendString(u8 *A_Pu8String)
{
	while (*A_Pu8String > 0)
	{
		HLCD_voidSendData(*A_Pu8String++);
	}
}

void HLCD_voidGotoPos(u8 A_u8RowNum, u8 A_u8ColNum)
{
	switch (A_u8RowNum) {
		case LCD_ROW_ONE:
			HLCD_voidSendCommand(LCD_ROW1_ADDRESS + A_u8ColNum);
			break;
		case LCD_ROW_TWO:
			HLCD_voidSendCommand(LCD_ROW2_ADDRESS + A_u8ColNum);
			break;
		default:
			break;
	}
	_delay_ms(1);
}

void HLCD_voidDisplayNumber(u32 A_u32Number)
{
	u32 local_u32Number = 1;
	if (A_u32Number == 0)
	{
		HLCD_voidSendData('0');
	}
	while (A_u32Number != 0)
	{
		local_u32Number = ((local_u32Number * 10) + (A_u32Number % 10));
		A_u32Number = A_u32Number / 10;
	}
	while (local_u32Number != 1)
	{
		HLCD_voidSendData((local_u32Number % 10) + 48);
		local_u32Number = local_u32Number /10;
	}
}

void HLCD_voidSendSpecialCharacter(u8 *A_pu8CharArr, u8 A_u8PatternNum, u8 A_u8RowNum, u8 A_u8ColNum)
{
	u8 local_u8CGRAMAddress, local_u8Counter;
	/* Calculate CGRAM Address = Pattern Number * 8 */
	local_u8CGRAMAddress = A_u8PatternNum * 8;
	SET_BIT(local_u8CGRAMAddress, 6);
	/* CGRAM Set */
	HLCD_voidSendCommand(local_u8CGRAMAddress);
	for (local_u8Counter = 0; local_u8Counter < 8; local_u8Counter++)
	{
		/* Write Pattern to CGRAM from Array */
		HLCD_voidSendData(A_pu8CharArr[local_u8Counter]);
	}
	/*SET Pattern Position*/
	HLCD_voidGotoPos(A_u8RowNum, A_u8ColNum);
	/* Read Pattern from CGRAM */
	HLCD_voidSendData(A_u8PatternNum);
}
