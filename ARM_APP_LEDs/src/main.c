/*
 * main.c
 *
 *  Created on: Feb 14, 2022
 *      Author: Ahmed Ibrahim
 */
#include "../include/LIB/bit_math.h"
#include "../include/LIB/std_type.h"

#include "../include/MCAL/RCC/RCC_Interface.h"
#include "../include/MCAL/GPIO/GPIO_Interface.h"


int main()
{
	/*Initiate RCC Peripheral*/
	MRCC_Init();
	/*Enable GPIO for PORTA and PORTB*/
	MRCC_SetPeripheralConfiguration(RCC_PERIPHERAL_IOPA,RCC_APB2,RCC_PERIPHERAL_ENABLE);
	MRCC_SetPeripheralConfiguration(RCC_PERIPHERAL_IOPB,RCC_APB2,RCC_PERIPHERAL_ENABLE);
	/*Set Pins Directions*/
	MGPIO_voidSetPinDirection(GPIO_PORTA,GPIO_PIN0,GPIO_OUTPUT_MODE_02MHz,GPIO_OUTPUT_PUSH_PULL);
	MGPIO_voidSetPinDirection(GPIO_PORTB,GPIO_PIN0,GPIO_OUTPUT_MODE_02MHz,GPIO_OUTPUT_PUSH_PULL);
	/*Set Pins Values*/
	MGPIO_voidSetPinValue(GPIO_PORTA,GPIO_PIN0,GPIO_HIGH);
	MGPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN0,GPIO_HIGH);

	while(1)
	{

	}
}
