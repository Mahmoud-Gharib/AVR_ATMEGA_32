#include "../../../03-MCAL/01-DIO/DIO.h"
#include "DIO_TEST.h"

void DIO(void)
{
	 MDIO_voidSetDirectionPin(PA0,INPUT);
	 MDIO_voidPullUpPin(PA0,ENABLE);
	 MDIO_voidSetDirectionPin(PA1,OUTPUT);
	 MDIO_voidSetDirectionPort(M_PORTB,OUTPUT);
	
	while(1)
	{
		if( MDIO_u8ReadValuePin(PA0) == 0)
		{
			MDIO_voidTogPin(PA1);
			MDIO_voidSetLevelPort(M_PORTB,0xFF);
		}
		else if(MDIO_u8ReadValuePin(PA0) == 1)
		{
		   MDIO_voidSetLevelPin(PA1,HIGH);
		   MDIO_voidSetLevelPort(M_PORTB,0x00);
		}
	}
	
}