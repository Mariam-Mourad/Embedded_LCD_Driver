/*
 * main.c
 *
 *  Created on: Aug 24, 2019
 *      Author: Mariam
 */


#include"std_types.h"
#include"Bit_calc.h"
#include<util/delay.h>

#include"DIO_interface.h"
#include"DIO_regs.h"

#include"LCD_interface.h"


u8 Local_u8iteration;

void main (void)
{u8 name[]="ANNE";
u8 y=0;
	//direction men e5tesas el
	DDRA_Register=0xFF; // making PORTA set as OUTPUT
	DDRD_Register=0xFF;//making PORTD set as OUTPUT

	LCD_vidIntitalize();

	//LCD_vidWriteExtraChar(0,0);
	LCD_vidWriteString3(name);


	while(1){
		/*for(Local_u8iteration=0;Local_u8iteration<16;Local_u8iteration++)
					{
						GoToXY(Local_u8iteration+1,y^=1);
						 LCD_vidWriteData(2);
						 _delay_ms(1000);
						 LCD_vidClearScreen();
						 for(Local_u8iteration=0;Local_u8iteration<16;Local_u8iteration+=4)
						 	 {	GoToXY(Local_u8iteration,1);
						 	 	 LCD_vidWriteData(0);
						 	 	 GoToXY(Local_u8iteration+3,1);
						 	 	 LCD_vidWriteData(1);
						 	 	 GoToXY(Local_u8iteration+1,0);
						 	 	 LCD_vidWriteData(0);
						 	 	 GoToXY(Local_u8iteration+2,0);
						 	 	 LCD_vidWriteData(1);

						 	 	}
						 	 _delay_ms(1000);

					}*/
}
}
