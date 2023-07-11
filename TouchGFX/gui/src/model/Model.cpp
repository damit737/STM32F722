#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

extern UART_HandleTypeDef huart5;

Model::Model() : modelListener(0)
{
	ButtonState[0].Port = SW1_GPIO_Port;
	ButtonState[0].Pin = SW1_Pin;

	ButtonState[1].Port = SW2_GPIO_Port;
	ButtonState[1].Pin = SW2_Pin;

	ButtonState[2].Port = SW3_GPIO_Port;
	ButtonState[2].Pin = SW3_Pin;

	ButtonState[3].Port = SW4_GPIO_Port;
	ButtonState[3].Pin = SW4_Pin;

	ButtonState[4].Port = SW5_GPIO_Port;
	ButtonState[4].Pin = SW5_Pin;

	ButtonState[5].Port = SW6_GPIO_Port;
	ButtonState[5].Pin = SW6_Pin;

	ButtonState[6].Port = SW7_GPIO_Port;
	ButtonState[6].Pin = SW7_Pin;

	ButtonState[7].Port = SW8_GPIO_Port;
	ButtonState[7].Pin = SW8_Pin;
}

void Model::tick()
{
	this->SystemProcess( );
}

void Model::SystemProcess ( void )
{
//	uint8_t number = sizeof(ButtonState) / sizeof(ButtonState[0]);
	uint8_t number = 5;
	uint8_t TEST[20] = "SENT SUCCESS\n";
	uint8_t counter;
	for( counter = 0 ; counter <= number ; counter++ )
	{
		if( HAL_GPIO_ReadPin( ButtonState[counter].Port, ButtonState[counter].Pin ) == GPIO_PIN_SET )
		{
//			HAL_GPIO_WritePin( GPIOC, GPIO_PIN_8, GPIO_PIN_SET );
			HAL_UART_Transmit(&huart5, &TEST[0], 14, 100);
//			HAL_GPIO_WritePin( GPIOC, GPIO_PIN_8, GPIO_PIN_RESET );
//			HAL_Delay( 200 );
		}
	}
}
