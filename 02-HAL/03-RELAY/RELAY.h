/*==================================================================================*
 * File        : RELAY.h     														*
 * Description : This file includes RELAY Driver prototypes and macros				*
 * Author      : Mahmoud Gharib Embedded SW Engineer 								*		
 * Date        : 2/2/2022															*		
 * Git account : https://github.com/Mahmoud-Gharib									*		
 * mail        : mahmoudgharib99999@gmail.com 										*		
 *==================================================================================*/
#ifndef RELAY_H_
#define RELAY_H_

#include "../../00-LIB/STD_TYPES.h"
/*************************** RELAYES macros **********************/
#define RELAY_1    1
#define RELAY_2    2
/****************** Prototypes RELAY DRIVERS ********************/
void HRELAY_voidInitRelay(u8 Copy_u8Relay);
void HRELAY_voidRelayOn(u8 Copy_u8Relay);
void HRELAY_voidRelayOff(u8 Copy_u8Relay);	

#endif 