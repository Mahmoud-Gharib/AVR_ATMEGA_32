/*==================================================================================*
 * File        : LED.h     														    *
 * Description : This file includes LED Driver prototypes and macros				*
 * Author      : Mahmoud Gharib Embedded SW Engineer 								*		
 * Date        : 2/2/2022															*		
 * Git account : https://github.com/Mahmoud-Gharib									*		
 * mail        : mahmoudgharib99999@gmail.com 										*		
 *==================================================================================*/
#ifndef LED_H_
#define LED_H_

#include "../../00-LIB/STD_TYPES.h"

/*COLOR LEDS macros*/
#define B_LED    1
#define G_LED    2
#define R_LED    3
/*Prototypes LED DRIVERS*/
void HLED_voidInitLed(u8 Copy_u8Led);
void HLED_voidLedOn(u8 Copy_u8Led);
void HLED_voidLedOff(u8 Copy_u8Led);
void HLED_voidLedTog(u8 Copy_u8Led);

#endif 