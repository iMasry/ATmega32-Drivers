/************************************************************/
/******** Title       : DIO_configurations          *********/
/******** File Name   : DIO_configurations.h        *********/
/******** Author      : Maged Elmasry               *********/
/******** Date        : 5/8/2022                    *********/
/******** version     : 1.1 V                       *********/
/******** Description : DIO list of configurations  *********/
/******** Compiler    : GNU AVR Cross Compiler      *********/
/******** Target      : Atmega32 Micro-controller   *********/
/************************************************************/

/****************************************************/
/*      guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_MCAL_DIO_CONFIGURATIONS_H_
#define INCLUDE_MCAL_DIO_CONFIGURATIONS_H_

/************************************************/
/*                 Direction:                   */
/*            PIN_INPUT - PIN_OUTPUT            */
/************************************************/
#define PORTA_PIN0_DIRECTION PIN_OUTPUT
#define PORTA_PIN1_DIRECTION PIN_OUTPUT
#define PORTA_PIN2_DIRECTION PIN_OUTPUT
#define PORTA_PIN3_DIRECTION PIN_OUTPUT
#define PORTA_PIN4_DIRECTION PIN_OUTPUT
#define PORTA_PIN5_DIRECTION PIN_OUTPUT
#define PORTA_PIN6_DIRECTION PIN_OUTPUT
#define PORTA_PIN7_DIRECTION PIN_OUTPUT

#define PORTB_PIN0_DIRECTION PIN_OUTPUT
#define PORTB_PIN1_DIRECTION PIN_OUTPUT
#define PORTB_PIN2_DIRECTION PIN_OUTPUT
#define PORTB_PIN3_DIRECTION PIN_OUTPUT
#define PORTB_PIN4_DIRECTION PIN_OUTPUT
#define PORTB_PIN5_DIRECTION PIN_OUTPUT
#define PORTB_PIN6_DIRECTION PIN_OUTPUT
#define PORTB_PIN7_DIRECTION PIN_OUTPUT

#define PORTC_PIN0_DIRECTION PIN_OUTPUT
#define PORTC_PIN1_DIRECTION PIN_OUTPUT
#define PORTC_PIN2_DIRECTION PIN_OUTPUT
#define PORTC_PIN3_DIRECTION PIN_OUTPUT
#define PORTC_PIN4_DIRECTION PIN_INPUT
#define PORTC_PIN5_DIRECTION PIN_INPUT
#define PORTC_PIN6_DIRECTION PIN_INPUT
#define PORTC_PIN7_DIRECTION PIN_INPUT

#define PORTD_PIN0_DIRECTION PIN_OUTPUT
#define PORTD_PIN1_DIRECTION PIN_OUTPUT
#define PORTD_PIN2_DIRECTION PIN_OUTPUT
#define PORTD_PIN3_DIRECTION PIN_OUTPUT
#define PORTD_PIN4_DIRECTION PIN_OUTPUT
#define PORTD_PIN5_DIRECTION PIN_OUTPUT
#define PORTD_PIN6_DIRECTION PIN_OUTPUT
#define PORTD_PIN7_DIRECTION PIN_OUTPUT

/************************************************/
/*                  Value:                      */
/*		OUTPUT: PIN_LOW - PIN_HIGH              */
/*		INPUT : PIN_PULLUP - PIN_FLOATING       */
/************************************************/
#define PORTA_PIN0_VALUE PIN_LOW
#define PORTA_PIN1_VALUE PIN_LOW
#define PORTA_PIN2_VALUE PIN_LOW
#define PORTA_PIN3_VALUE PIN_LOW
#define PORTA_PIN4_VALUE PIN_LOW
#define PORTA_PIN5_VALUE PIN_LOW
#define PORTA_PIN6_VALUE PIN_LOW
#define PORTA_PIN7_VALUE PIN_LOW

#define PORTB_PIN0_VALUE PIN_LOW
#define PORTB_PIN1_VALUE PIN_LOW
#define PORTB_PIN2_VALUE PIN_LOW
#define PORTB_PIN3_VALUE PIN_LOW
#define PORTB_PIN4_VALUE PIN_LOW
#define PORTB_PIN5_VALUE PIN_LOW
#define PORTB_PIN6_VALUE PIN_LOW
#define PORTB_PIN7_VALUE PIN_LOW

#define PORTC_PIN0_VALUE PIN_HIGH
#define PORTC_PIN1_VALUE PIN_HIGH
#define PORTC_PIN2_VALUE PIN_HIGH
#define PORTC_PIN3_VALUE PIN_HIGH
#define PORTC_PIN4_VALUE PIN_PULLUP
#define PORTC_PIN5_VALUE PIN_PULLUP
#define PORTC_PIN6_VALUE PIN_PULLUP
#define PORTC_PIN7_VALUE PIN_PULLUP

#define PORTD_PIN0_VALUE PIN_LOW
#define PORTD_PIN1_VALUE PIN_LOW
#define PORTD_PIN2_VALUE PIN_LOW
#define PORTD_PIN3_VALUE PIN_LOW
#define PORTD_PIN4_VALUE PIN_LOW
#define PORTD_PIN5_VALUE PIN_LOW
#define PORTD_PIN6_VALUE PIN_LOW
#define PORTD_PIN7_VALUE PIN_LOW

#endif /* INCLUDE_MCAL_DIO_CONFIGURATIONS_H_ */
