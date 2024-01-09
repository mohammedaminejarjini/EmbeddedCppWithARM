#ifndef RCC_H
#define RCC_H
#include "stm32f446xx.h"
// Port names of our board
enum RCC_GpioPortName_t
{
	RCC_GPIO_PORT_A,
	RCC_GPIO_PORT_B,
	RCC_GPIO_PORT_C,
	RCC_GPIO_PORT_D,
	RCC_GPIO_PORT_E,
	RCC_GPIO_PORT_F
};

enum RCC_ErrorType_t
{
	RCC_OK,
	RCC_NOT_OK,
	RCC_DEFAULT_ERROR = 0xFF
};
class rcc
{
	public:
		rcc();
	  RCC_ErrorType_t RCC_GpioPortInit(RCC_GpioPortName_t GpioPortName);
	private:
};
#endif