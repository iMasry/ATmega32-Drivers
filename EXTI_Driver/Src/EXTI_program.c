/***********************************************************/
/******** Title       : EXTI_program               *********/
/******** File Name   : EXTI_program.c             *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 24/8/2022                  *********/
/******** version     : 1.0 V                      *********/
/******** Description : EXTI Implementation        *********/
/******** Compiler    : GNU AVR Cross Compiler     *********/
/******** Target      : Atmega32 Micro-controller  *********/
/***********************************************************/

#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#include"../Include/MCAL/EXTI/EXTI_interface.h"
#include"../Include/MCAL/EXTI/EXTI_private.h"
#include"../Include/MCAL/EXTI/EXTI_configurations.h"

#define NULL 0

void (*EXTI0_CallBack)(void) = NULL;
void (*EXTI1_CallBack)(void) = NULL;
void (*EXTI2_CallBack)(void) = NULL;


/*****************************************************************/
/*                  EXTI: EXTI0 - EXTI1 - EXTI2                  */
/* SenseMode: LOW_LEVEL - ON_CHANGE - FALLING_EDGE - RISING_EDGE */
/*               EXTI2 only: FALLING_EDGE - RISING_EDGE          */
/*****************************************************************/
void MEXTI_voidConfig(u8 A_u8EXTI, u8 A_u8SenseMode)
{
	if(A_u8SenseMode < 4)
	{
		switch (A_u8EXTI)
		{
			case EXTI0:
				MCUCR &= ~(SENSE_MODE_MASK<<EXTI0_SENSE_B1);
				MCUCR |= (A_u8SenseMode<<EXTI0_SENSE_B1);
				break;
			case EXTI1:
				MCUCR &= ~(SENSE_MODE_MASK<<EXTI1_SENSE_B1);
				MCUCR |= (A_u8SenseMode<<EXTI1_SENSE_B1);
				break;
			case EXTI2:
				switch (A_u8SenseMode) {
					case FALLING_EDGE:
						CLR_BIT(MCUCSR, EXTI2_SENSE_B1);
						break;
					case RISING_EDGE:
						SET_BIT(MCUCSR, EXTI2_SENSE_B1);
						break;
				}
				break;
		}
	}
}

/*****************************************************************/
/*                  EXTI: EXTI0 - EXTI1 - EXTI2                  */
/*****************************************************************/
void MEXTI_voidEnable(u8 A_u8EXTI)
{
	switch (A_u8EXTI)
	{
		case EXTI0:
			SET_BIT(GICR, EXIT0_ENABLE_BIT);
			break;
		case EXTI1:
			SET_BIT(GICR, EXIT1_ENABLE_BIT);
			break;
		case EXTI2:
			SET_BIT(GICR, EXIT2_ENABLE_BIT);
			break;
	}
}

/*****************************************************************/
/*                  EXTI: EXTI0 - EXTI1 - EXTI2                  */
/*****************************************************************/
void MEXTI_voidDisable(u8 A_u8EXTI)
{
	switch (A_u8EXTI)
	{
		case EXTI0:
			CLR_BIT(GICR, EXIT0_ENABLE_BIT);
			break;
		case EXTI1:
			CLR_BIT(GICR, EXIT1_ENABLE_BIT);
			break;
		case EXTI2:
			CLR_BIT(GICR, EXIT2_ENABLE_BIT);
			break;
	}
}

/*****************************************************************/
/*                  EXTI: EXTI0 - EXTI1 - EXTI2                  */
/*****************************************************************/
void MEXTI_voidClearFlag(u8 A_u8EXTI)
{
	switch (A_u8EXTI)
	{
		case EXTI0:
			SET_BIT(GICR, EXIT0_FLAG_BIT);
			break;
		case EXTI1:
			SET_BIT(GICR, EXIT1_FLAG_BIT);
			break;
		case EXTI2:
			SET_BIT(GICR, EXIT2_FLAG_BIT);
			break;
	}
}

/*****************************************************************/
/*                  EXTI: EXTI0 - EXTI1 - EXTI2                  */
/*****************************************************************/
void MEXTI_voidSetCallBack(u8 A_u8EXTI, void (*ptrToFunc)(void))
{
	if(ptrToFunc != NULL)
	{
		switch (A_u8EXTI) {
			case EXTI0:
				EXTI0_CallBack = ptrToFunc;
				break;
			case EXTI1:
				EXTI1_CallBack = ptrToFunc;
				break;
			case EXTI2:
				EXTI2_CallBack = ptrToFunc;
				break;
		}
	}
}

void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
	if(EXTI0_CallBack != NULL)
	{
		EXTI0_CallBack();
	}
}

void __vector_2(void) __attribute__((signal));
void __vector_2(void)
{
	if(EXTI1_CallBack != NULL)
	{
		EXTI1_CallBack();
	}
}
void __vector_3(void) __attribute__((signal));
void __vector_3(void)
{
	if(EXTI2_CallBack != NULL)
	{
		EXTI2_CallBack();
	}
}
