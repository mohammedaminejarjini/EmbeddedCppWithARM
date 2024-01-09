#include "rcc.h"
rcc RCC_object;

RCC_GpioPortName_t usedPort = RCC_GPIO_PORT_A;
int main()
{
	RCC_object.RCC_GpioPortInit(RCC_GPIO_PORT_A);
	while(1);
		
	
}