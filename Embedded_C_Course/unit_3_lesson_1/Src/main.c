#include "stdint.h"
#define RCC_BA 0x40021000
#define GPIO_Port_A 0x40010800
#define APB2ENR *(volatile uint32_t*)(RCC_BA+0x18)
#define CRH_PORT_A *(volatile uint32_t*)(GPIO_Port_A+0x04)
#define ODR_PORT_A *(volatile uint32_t*)(GPIO_Port_A+0x0C)



int main(void)
{

	APB2ENR |= 1<<13;
	CRH_PORT_A &=0xff0fffff;
	CRH_PORT_A |=0x00200000;
	while(1){
		ODR_PORT_A |= (1<<13);
		for(int i=0;i<5000;i++);
		ODR_PORT_A &= ~(1<<13);
		for(int i=0;i<5000;i++);

	}


}
