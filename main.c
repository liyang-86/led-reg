#include "stm32f4xx.h"

int main (void)
{
	RCC_AHB1ENR |= (1<<5);
	
	GPIOF_MODER &= ~(0x03<<(2*6));
	GPIOF_MODER |= (1<<(2*6));
	
	GPIOF_OTYPER &= ~(1<<(1*6));
	GPIOF_OTYPER |= (0<<(1*6));
	
	GPIOF_OSPEEDR &= ~(0x03<<(2*6));
	GPIOF_OSPEEDR |= (0<<(2*6));
	
	GPIOF_PUPDR &= ~(0x03<<(2*6));
	GPIOF_PUPDR |= (1<<(2*6));
	
	GPIOF_BSRR |= (1<<16<6);
	// GPIOF_BSRR |= (1<<6);
	
	while(1);
}	

void SystemInit(void)
{
	
}