/***************************************************/
/******** Title       : STD_TYPES          *********/
/******** File Name   : STD_TYPES.h        *********/
/******** Author      : Maged Elmasry      *********/
/******** Date        : 20/7/2022          *********/
/******** version     : 1.0 V              *********/
/******** Description : Standard Types lib *********/
/***************************************************/


/************************************************/
/* guard of file will call one time in .c       */
/************************************************/

#ifndef _STD_TYPES_H
#define _STD_TYPES_H

typedef unsigned char      u8;
typedef unsigned short int u16;
typedef unsigned long  int u32;

typedef signed char        s8;
typedef signed short int   s16;
typedef signed long  int   s32;

typedef float              f32;
typedef double             f64;

typedef void(*pf)(void);

#endif
