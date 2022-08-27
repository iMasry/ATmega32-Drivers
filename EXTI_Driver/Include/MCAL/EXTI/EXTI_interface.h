/************************************************************************/
/******** Title       : EXTI_interface                          *********/
/******** File Name   : EXTI_interface.h                        *********/
/******** Author      : Maged Elmasry                           *********/
/******** Date        : 24/8/2022                               *********/
/******** version     : 1.0 V                                   *********/
/******** Description : EXTI functions prototype and macros     *********/
/******** Compiler    : GNU AVR Cross Compiler                  *********/
/******** Target      : Atmega32 Micro-controller               *********/
/************************************************************************/

/****************************************************/
/*      Guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_MCAL_EXTI_EXTI_INTERFACE_H_
#define INCLUDE_MCAL_EXTI_EXTI_INTERFACE_H_

/********************************************/
/*          Macros to use in code           */
/********************************************/
#define EXTI0 0
#define EXTI1 1
#define EXTI2 2

#define LOW_LEVEL    0b00
#define ON_CHANGE    0b01
#define FALLING_EDGE 0b10
#define RISING_EDGE  0b11

/***********************************************************************************/
/*Function       : MEXTI_voidConfig                                                */
/*I/P Parameters : A_u8EXTI, A_u8SenseMode                                         */
/*Returns        : no return                                                       */
/*Description    : Configure the external interrupt with sense mode                */
/***********************************************************************************/
void MEXTI_voidConfig(u8 A_u8EXTI, u8 A_u8SenseMode);

/***********************************************************************************/
/*Function       : MEXTI_voidEnable                                                */
/*I/P Parameters : A_u8EXTI                                                        */
/*Returns        : no return                                                       */
/*Description    : Enable the external interrupt                                   */
/***********************************************************************************/
void MEXTI_voidEnable(u8 A_u8EXTI);

/***********************************************************************************/
/*Function       : MEXTI_voidDisable                                               */
/*I/P Parameters : A_u8EXTI                                                        */
/*Returns        : no return                                                       */
/*Description    : Disable the external interrupt                                  */
/***********************************************************************************/
void MEXTI_voidDisable(u8 A_u8EXTI);

/***********************************************************************************/
/*Function       : MEXTI_voidClearFlag                                             */
/*I/P Parameters : A_u8EXTI                                                        */
/*Returns        : no return                                                       */
/*Description    : Clear flag of the external interrupt                            */
/***********************************************************************************/
void MEXTI_voidClearFlag(u8 A_u8EXTI);

/***********************************************************************************/
/*Function       : MEXTI_voidSetCallBack                                           */
/*I/P Parameters : A_u8EXTI, (*ptrToFunc)(void)                                    */
/*Returns        : no return                                                       */
/*Description    : Call back the address of the function in main.c                 */
/***********************************************************************************/
void MEXTI_voidSetCallBack(u8 A_u8EXTI, void (*ptrToFunc)(void));

#endif /* INCLUDE_MCAL_EXTI_EXTI_INTERFACE_H_ */
