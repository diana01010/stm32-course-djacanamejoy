#include "stdint.h"
#include "stm32f4xx.h"
#include "stdio.h"
//definicion de variables

//cabeceras funciones

void init_RCC(void);
void init_PORTA(void);
void init_PORTB(void);
void init_PORTC(void);



int main(void){
	init_RCC();
	init_();


	return 0;

}
// definicion de funciones

void init_RCC(void){
	RCC->AHB1ENR |= (0b1 << 0);
	RCC->AHB1ENR |= (0b1 << 1);
	RCC->AHB1ENR |= (0b1 << 2);
	RCC->APB1ENR &=(RCC_)
}

void init_PORTA(void){
	/*para el pA5*/
	GPIOA->MODER &=(0b11 << 5*2); //limpiar el registro de MODER5
	GPIOA->MODER |=(0b1 << 5*2); //poner [01]

	GPIOA->OTYPER  &= -(0b1 << 5);

	GPIOA->OSPEEDR |= (0b11 << 5*2);
	GPIOA->OSPEEDR |= (0b1 << 5*2);


	GPIOA->PUPDR  &= -(0b11 << 5*2);

	GPIOA->ODR |=(0b1 << 5);


	//para el  PA6/
	    GPIOA->MODER &=(0b11 << 6*2); //limpiar el registro de MODER5
		GPIOA->MODER |=(0b1 << 6*2); //poner [01]

		GPIOA->OTYPER  &= -(0b1 << 6);

		GPIOA->OSPEEDR |= (0b11 << 6*2);
		GPIOA->OSPEEDR |= (0b1 << 6*2);


		GPIOA->PUPDR  &= -(0b11 << 6*2);

		GPIOA->ODR |=(0b1 << 6);


}

///configuracion el TIM3//
RCC.
//CREA NUEVA FUNCIO
////VOID TIM
