/*==================================================================================*
 * File        : BUZZERh     														*
 * Description : This file includes BUZZER Driver prototypes and macros				*
 * Author      : Mahmoud Gharib Embedded SW Engineer 								*		
 * Date        : 2/2/2022															*		
 * Git account : https://github.com/Mahmoud-Gharib									*		
 * mail        : mahmoudgharib99999@gmail.com 										*		
 *==================================================================================*/
#ifndef BUZZER_H_
#define BUZZER_H_

#include "../../00-LIB/STD_TYPES.h"
/************* Prototypes BUZZER DRIVERS ******************/
void HBUZZER_voidInitBuzzer(void);
void HBUZZER_voidBuzzerOn(void);
void HBUZZER_voidBuzzerOff(void);
void HBUZZER_voidBuzzerTog(void);
void HBUZZER_voidBuzzerTurnOnce(void);
void HBUZZER_voidBuzzerTurnTwice(void);
void HBUZZER_voidBuzzerTurnTrible(void);
void HBUZZER_voidBuzzerTurnLong(void);

#endif 