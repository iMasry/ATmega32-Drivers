/***********************************************************/
/******** Title       : GI_program                 *********/
/******** File Name   : GI_program.c               *********/
/******** Author      : Maged Elmasry              *********/
/******** Date        : 26/8/2022                  *********/
/******** version     : 1.0 V                      *********/
/******** Description : GI Implementation          *********/
/******** Compiler    : GNU AVR Cross Compiler     *********/
/******** Target      : Atmega32 Micro-controller  *********/
/***********************************************************/

#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#include"../Include/MCAL/GI/GI_interface.h"
#include"../Include/MCAL/GI/GI_private.h"
#include"../Include/MCAL/GI/GI_configurations.h"

void MGI_voidEnable(void)
{
	SET_BIT(SREG, GLOBAL_INTERRUPT_ENABLE_BIT);
}

void MGI_voidDisable(void)
{
	CLR_BIT(SREG, GLOBAL_INTERRUPT_ENABLE_BIT);
}
