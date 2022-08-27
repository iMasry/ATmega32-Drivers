/************************************************************************/
/******** Title       : DIO_interface                           *********/
/******** File Name   : DIO_interface.h                         *********/
/******** Author      : Maged Elmasry                           *********/
/******** Date        : 5/8/2022                                *********/
/******** version     : 1.1 V                                   *********/
/******** Description : DIO functions prototype and macros      *********/
/******** Compiler    : GNU AVR Cross Compiler                  *********/
/******** Target      : Atmega32 Micro-controller               *********/
/************************************************************************/

/********************************************/
/*  guard of file will call one time in .c  */
/********************************************/
#ifndef INCLUDE_MCAL_DIO_INTERFACE_H_
#define INCLUDE_MCAL_DIO_INTERFACE_H_

#define PIN_INPUT  0
#define PIN_OUTPUT 1

#define PORT_INPUT  0x00
#define PORT_OUTPUT 0xFF

#define PIN_HIGH 1
#define PIN_LOW  0

#define PORT_HIGH 0xFF
#define PORT_LOW  0x00

#define PIN_PULLUP   1
#define PIN_FLOATING 0

#define PORT_PULLUP   0xFF
#define PORT_FLOATING 0x00

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7


/***********************************************************************************/
/*Function       : MDIO_voidInit                                                   */
/*I/P Parameters : no input parameters                                             */
/*Returns        : no return                                                       */
/*Description    : DIO initializations in the configurations.h file                */
/***********************************************************************************/
void MDIO_voidInit(void);

/***********************************************************************************/
/*Function       : MDIO_voidSetPinDirection                                        */
/*I/P Parameters : A_u8PortId, A_u8PinId, A_u8Direction                            */
/*Returns        : no return                                                       */
/*Description    : Set the direction of a pin as INPUT or OUTPUT                   */
/***********************************************************************************/
void MDIO_voidSetPinDirection(u8 A_u8PortId, u8 A_u8PinId, u8 A_u8Direction);

/***********************************************************************************/
/*Function       : MDIO_voidSetPinValue                                            */
/*I/P Parameters : A_u8PortId, A_u8PinId, A_u8Value                                */
/*Returns        : no return                                                       */
/*Description    : Set the value of a pin as (LOW or HIGH) (PULLUP or FLOATING)    */
/***********************************************************************************/
void MDIO_voidSetPinValue(u8 A_u8PortId, u8 A_u8PinId, u8 A_u8Value);

/***********************************************************************************/
/*Function       : MDIO_u8GetPinValue                                              */
/*I/P Parameters : u8 A_u8PortId, u8 A_u8PinId                                     */
/*Returns        : returns u8 value                                                */
/*Description    : Get the value of an input pin                                   */
/***********************************************************************************/
u8 MDIO_u8GetPinValue(u8 A_u8PortId, u8 A_u8PinId);

/***********************************************************************************/
/*Function       : MDIO_voidSetPortDirection                                       */
/*I/P Parameters : u8 A_u8PortId, u8 A_u8Direction                                 */
/*Returns        : no return                                                       */
/*Description    : Set the direction of a port as INPUT or OUTPUT                  */
/***********************************************************************************/
void MDIO_voidSetPortDirection(u8 A_u8PortId, u8 A_u8Direction);

/***********************************************************************************/
/*Function       : MDIO_voidSetPortValue                                           */
/*I/P Parameters : u8 A_u8PortId, u8 A_u8Value                                     */
/*Returns        : no return                                                       */
/*Description    : Set the value of a port as (LOW or HIGH) (PULLUP or FLOATING)   */
/***********************************************************************************/
void MDIO_voidSetPortValue(u8 A_u8PortId, u8 A_u8Value);


#endif /* INCLUDE_MCAL_DIO_INTERFACE_H_ */
