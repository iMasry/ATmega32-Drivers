/************************************************************************/
/******** Title       : GI_interface                            *********/
/******** File Name   : GI_interface.h                          *********/
/******** Author      : Maged Elmasry                           *********/
/******** Date        : 26/8/2022                               *********/
/******** version     : 1.0 V                                   *********/
/******** Description : GI functions prototype and macros       *********/
/******** Compiler    : GNU AVR Cross Compiler                  *********/
/******** Target      : Atmega32 Micro-controller               *********/
/************************************************************************/

/****************************************************/
/*      Guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_MCAL_GI_GI_INTERFACE_H_
#define INCLUDE_MCAL_GI_GI_INTERFACE_H_

/***********************************************************************************/
/*Function       : MGI_voidEnable                                                  */
/*I/P Parameters : no input parameters                                             */
/*Returns        : no return                                                       */
/*Description    : Enable the global interrupt                                     */
/***********************************************************************************/
void MGI_voidEnable(void);

/***********************************************************************************/
/*Function       : MGI_voidDisable                                                 */
/*I/P Parameters : no input parameters                                             */
/*Returns        : no return                                                       */
/*Description    : Disable the global interrupt                                    */
/***********************************************************************************/
void MGI_voidDisable(void);


#endif /* INCLUDE_MCAL_GI_GI_INTERFACE_H_ */
