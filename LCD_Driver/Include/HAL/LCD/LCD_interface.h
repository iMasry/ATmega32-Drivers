/*************************************************************/
/******** Title       : LCD_interface                *********/
/******** File Name   : LCD_interface.h              *********/
/******** Author      : Maged Elmasry                *********/
/******** Date        : 19/8/2022                    *********/
/******** version     : 1.2 V                        *********/
/******** Description : LCD functions prototype      *********/
/******** Compiler    : GNU AVR Cross Compiler       *********/
/******** Target      : Atmega32 Micro-controller    *********/
/*************************************************************/

/****************************************************/
/*      guard of file will call one time in .c      */
/****************************************************/
#ifndef INCLUDE_HAL_LCD_LCD_INTERFACE_H_
#define INCLUDE_HAL_LCD_LCD_INTERFACE_H_


/***********************************************************************************/
/*Function       : HLCD_voidSendCommand                                            */
/*I/P Parameters : A_u8Command                                                     */
/*Returns        : no return                                                       */
/*Description    : Sending command to LCD                                          */
/***********************************************************************************/
void HLCD_voidSendCommand(u8 A_u8Command);

/***********************************************************************************/
/*Function       : HLCD_voidSendData                                               */
/*I/P Parameters : A_u8Data                                                        */
/*Returns        : no return                                                       */
/*Description    : Sending data to LCD                                             */
/***********************************************************************************/
void HLCD_voidSendData(u8 A_u8Data);

/***********************************************************************************/
/*Function       : HLCD_voidInit                                                   */
/*I/P Parameters : no input parameters                                             */
/*Returns        : no return                                                       */
/*Description    : LCD initializations in the configurations.h file (4-bit, 8-bit) */
/***********************************************************************************/
void HLCD_voidInit(void);

/***********************************************************************************/
/*Function       : HLCD_voidClearDisplay                                           */
/*I/P Parameters : no input parameters                                             */
/*Returns        : no return                                                       */
/*Description    : Clear LCD                                                       */
/***********************************************************************************/
void HLCD_voidClearDisplay(void);

/***********************************************************************************/
/*Function       : HLCD_voidSendData                                               */
/*I/P Parameters : *A_Pu8String                                                    */
/*Returns        : no return                                                       */
/*Description    : Display String on LCD                                           */
/***********************************************************************************/
void HLCD_voidSendString(u8 *A_Pu8String);

/***********************************************************************************/
/*Function       : HLCD_voidGotoPos                                                */
/*I/P Parameters : A_u8RowNum, A_u8ColNum                                          */
/*Returns        : no return                                                       */
/*Description    : Go to specific place on LCD                                     */
/***********************************************************************************/
void HLCD_voidGotoPos(u8 A_u8RowNum, u8 A_u8ColNum);

/***********************************************************************************/
/*Function       : HLCD_voidDisplayNumber                                          */
/*I/P Parameters : A_u32Number                                                     */
/*Returns        : no return                                                       */
/*Description    : Display Numbers on LCD                                          */
/***********************************************************************************/
void HLCD_voidDisplayNumber(u32 A_u32Number);

/***********************************************************************************/
/*Function       : HLCD_voidSendSpecialCharacter                                   */
/*I/P Parameters : *A_pu8CharArr, A_u8PatternNum, A_u8RowNum, A_u8ColNum           */
/*Returns        : no return                                                       */
/*Description    : Display Special Character on LCD                                */
/***********************************************************************************/
void HLCD_voidSendSpecialCharacter(u8 *A_pu8CharArr, u8 A_u8PatternNum, u8 A_u8RowNum, u8 A_u8ColNum);

#endif /* INCLUDE_HAL_LCD_LCD_INTERFACE_H_ */
