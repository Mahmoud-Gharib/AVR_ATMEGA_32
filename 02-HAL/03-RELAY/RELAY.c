/*==================================================================================*
 * File        : RELAY.c															*
 * Description : This file includes RELAY Driver implementations				    *
 * Author      : Mahmoud Gharib Embedded SW Engineer 								*		
 * Date        : 2/2/2022															*		
 * Git account : https://github.com/Mahmoud-Gharib									*		
 * mail        : mahmoudgharib99999@gmail.com 										*		
 *==================================================================================*/
#include "../../00-LIB/STD_TYPES.h"
#include "../../03-MCAL/01-DIO/DIO.h"
#include "RELAY_CFG.h"
#include "RELAY.h"

/*==============================================================================*
 * Prototype   : void HRELAY_voidInitRelay(u8 Copy_u8Relay);					*
 * Description : Set initialization direction of Relay							*
 * Arguments   : Relay : takes Relay 											*
 * return      : void															*
 *==============================================================================*/
void HRELAY_voidInitRelay(u8 Copy_u8Relay)
{
	switch(Copy_u8Relay)
	{
		case RELAY_1:
		MDIO_voidSetDirectionPin(RELAY_1_Pin,OUTPUT);
		break;
		case RELAY_2:
		MDIO_voidSetDirectionPin(RELAY_2_Pin,OUTPUT);
		break;
	}	
}
/*==============================================================================*
 * Prototype   : void HRELAY_voidRelayOn(u8 Copy_u8Relay);						*
 * Description : Turn on Relay													*
 * Arguments   : Relay : takes Relay 											*
 * return      : void															*
 *==============================================================================*/
void HRELAY_voidRelayOn(u8 Copy_u8Relay)
{
	switch(Copy_u8Relay)
	{
		case RELAY_1:
		MDIO_voidSetLevelPin(RELAY_1_Pin,HIGH);
		break;
		case RELAY_2:
		MDIO_voidSetLevelPin(RELAY_2_Pin,HIGH);
		break;
	}
}
/*==============================================================================*
 * Prototype   : void HRELAY_voidRelayOff(u8 Copy_u8Relay);						*
 * Description : Turn off Relay													*
 * Arguments   : Relay : takes Relay 											*
 * return      : void															*
 *==============================================================================*/
void HRELAY_voidRelayOff(u8 Copy_u8Relay)
{
	switch(Copy_u8Relay)
	{
		case RELAY_1:
		MDIO_voidSetLevelPin(RELAY_1_Pin,LOW);
		break;
		case RELAY_2:
		MDIO_voidSetLevelPin(RELAY_2_Pin,LOW);
		break;
	}
}
