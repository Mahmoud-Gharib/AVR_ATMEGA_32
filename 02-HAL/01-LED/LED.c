/*==================================================================================*
 * File        : LED.c																*
 * Description : This file includes LED Driver implementations				     	*
 * Author      : Mahmoud Gharib Embedded SW Engineer 								*		
 * Date        : 2/2/2022															*		
 * Git account : https://github.com/Mahmoud-Gharib									*		
 * mail        : mahmoudgharib99999@gmail.com 										*		
 *==================================================================================*/
#include "../../03-MCAL/01-DIO/DIO.h"
#include "LED_CFG.h"
#include "LED.h"

/*==============================================================================*
 * Prototype   : void HLED_voidInitLed(u8 Copy_u8Led);							*
 * Description : Set initialization direction of Led							*
 * Arguments   : Led : takes Led 												*
 * return      : void															*
 *==============================================================================*/
void HLED_voidInitLed(u8 Copy_u8Led)
{
	switch(Copy_u8Led)
	{
		 case B_LED: 
		 MDIO_voidSetDirectionPin(B_Led_Pin,OUTPUT);
		 break;
		 case G_LED:
		 MDIO_voidSetDirectionPin(G_Led_Pin,OUTPUT);
		 break;
		 case R_LED:
		 MDIO_voidSetDirectionPin(R_Led_Pin,OUTPUT);
		 break;
		 default:
		 
		 break;		 
	}
}
/*==============================================================================*
 * Prototype   : void HLED_voidLedOn(u8 Copy_u8Led);							*
 * Description : Turn on Led													*
 * Arguments   : Led : takes Led 												*
 * return      : void															*
 *==============================================================================*/
void HLED_voidLedOn(u8 Copy_u8Led)
{
	switch(Copy_u8Led)
	{
		case B_LED:
		MDIO_voidSetLevelPin(B_Led_Pin,HIGH);
		break;		  
		case G_LED:	  
		MDIO_voidSetLevelPin(G_Led_Pin,HIGH);
		break;		  
		case R_LED:	  
		MDIO_voidSetLevelPin(R_Led_Pin,HIGH);
		break;
		default:
		
		break;
	}
}
/*==============================================================================*
 * Prototype   : void HLED_voidLedOff(u8 Copy_u8Led);							*
 * Description : Turn off Led													*
 * Arguments   : Led : takes Led 												*
 * return      : void															*
 *==============================================================================*/
void HLED_voidLedOff(u8 Copy_u8Led)
{
	switch(Copy_u8Led)
	{
		case B_LED:
		MDIO_voidSetLevelPin(B_Led_Pin,LOW);
		break;		  
		case G_LED:	  
		MDIO_voidSetLevelPin(G_Led_Pin,LOW);
		break;		  
		case R_LED:	  
		MDIO_voidSetLevelPin(R_Led_Pin,LOW);
		break;
		default:
		
		break;
	}	
}
/*==============================================================================*
 * Prototype   : void HLED_voidLedTog(u8 Copy_u8Led);							*
 * Description : Toggle Led														*
 * Arguments   : Led : takes Led 												*
 * return      : void															*
 *==============================================================================*/
void HLED_voidLedTog(u8 Copy_u8Led)
{
	switch(Copy_u8Led)
	{
		case B_LED:
		MDIO_voidTogPin(B_Led_Pin);
		break;
		case G_LED:
		MDIO_voidTogPin(G_Led_Pin);
		break;
		case R_LED:
		MDIO_voidTogPin(R_Led_Pin);
		break;
		default:
		
		break;
	}
}