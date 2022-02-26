/*==================================================================================*
 * File        : BUZZER.c															*
 * Description : This file includes BUZZER Driver implementations				    *
 * Author      : Mahmoud Gharib Embedded SW Engineer 								*		
 * Date        : 2/2/2022															*		
 * Git account : https://github.com/Mahmoud-Gharib									*		
 * mail        : mahmoudgharib99999@gmail.com 										*		
 *==================================================================================*/
#include <util/delay.h>
#include "../../00-LIB/STD_TYPES.h"
#include "../../03-MCAL/01-DIO/DIO.h"
#include "BUZZER_CFG.h"
#include "BUZZER.h"
/*==============================================================================*
 * Prototype   : void HBUZZER_voidInitBuzzer(void);						    	*
 * Description : Set initialization direction of BUZZER							*
 * Arguments   : void															*
 * return      : void															*
 *==============================================================================*/
void HBUZZER_voidInitBuzzer(void)
{
	MDIO_voidSetDirectionPin(BUZZER_PIN,OUTPUT);
}
/*==============================================================================*
 * Prototype   : void HBUZZER_voidBuzzerOn(void);								*
 * Description : Turn on BUZZER													*
 * Arguments   : void															*
 * return      : void															*
 *==============================================================================*/
void HBUZZER_voidBuzzerOn(void)
{
	MDIO_voidSetLevelPin(BUZZER_PIN,HIGH);
}
/*==============================================================================*
 * Prototype   : void HBUZZER_voidBuzzerOff(void);								*
 * Description : Turn off BUZZER												*
 * Arguments   : void															*
 * return      : void															*
 *==============================================================================*/
void HBUZZER_voidBuzzerOff(void)
{
	MDIO_voidSetLevelPin(BUZZER_PIN,LOW);
}
/*==============================================================================*
 * Prototype   : void HBUZZER_voidBuzzerTog(void);								*
 * Description : Toggle BUZZER													*
 * Arguments   : void															*
 * return      : void															*
 *==============================================================================*/
void HBUZZER_voidBuzzerTog(void)
{
	MDIO_voidTogPin(BUZZER_PIN);
}
/*==============================================================================*
 * Prototype   : void HBUZZER_voidBuzzerOn(void);								*
 * Description : Turn on 1 times BUZZER											*
 * Arguments   : void															*
 * return      : void															*
 *==============================================================================*/
void HBUZZER_voidBuzzerTurnOnce(void)
{
	MDIO_voidSetLevelPin(BUZZER_PIN,HIGH);
	_delay_ms(500);
	MDIO_voidSetLevelPin(BUZZER_PIN,LOW);
}
/*==============================================================================*
 * Prototype   : void HBUZZER_voidBuzzerTurnTwice(void);						*
 * Description : Turn on 2 times BUZZER											*
 * Arguments   : void															*
 * return      : void															*
 *==============================================================================*/
void HBUZZER_voidBuzzerTurnTwice(void)
{
	MDIO_voidSetLevelPin(BUZZER_PIN,HIGH);
	_delay_ms(500);
	MDIO_voidSetLevelPin(BUZZER_PIN,LOW);
	_delay_ms(500);
	MDIO_voidSetLevelPin(BUZZER_PIN,HIGH);
	_delay_ms(500);
	MDIO_voidSetLevelPin(BUZZER_PIN,LOW);
	_delay_ms(500);
}
/*==============================================================================*
 * Prototype   : void HBUZZER_voidBuzzerTurnTrible(void);						*
 * Description : Turn on 3 times BUZZER											*
 * Arguments   : void															*
 * return      : void															*
 *==============================================================================*/
void HBUZZER_voidBuzzerTurnTrible(void)
{
	MDIO_voidSetLevelPin(BUZZER_PIN,HIGH);
	_delay_ms(500);
	MDIO_voidSetLevelPin(BUZZER_PIN,LOW);
	_delay_ms(500);
	MDIO_voidSetLevelPin(BUZZER_PIN,HIGH);
	_delay_ms(500);
	MDIO_voidSetLevelPin(BUZZER_PIN,LOW);
	_delay_ms(500);
	MDIO_voidSetLevelPin(BUZZER_PIN,HIGH);
	_delay_ms(500);
	MDIO_voidSetLevelPin(BUZZER_PIN,LOW);
	_delay_ms(500);
}
/*==============================================================================*
 * Prototype   : void HBUZZER_voidBuzzerTurnLong(void);							*
 * Description : Turn on BUZZER long time and turn off							*
 * Arguments   : void															*
 * return      : void															*
 *==============================================================================*/
void HBUZZER_voidBuzzerTurnLong(void)
{
	MDIO_voidSetLevelPin(BUZZER_PIN,HIGH);
	_delay_ms(10000);
	MDIO_voidSetLevelPin(BUZZER_PIN,LOW);
}