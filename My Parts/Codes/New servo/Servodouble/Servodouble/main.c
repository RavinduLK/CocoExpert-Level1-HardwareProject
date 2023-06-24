/*
 * Servodouble.c
 *
 * Created: 5/21/2022 4:49:32 PM
 * Author : ASUS
 */ 

#ifndef F_CPU
#define F_CPU 8000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA= 0x30; //Makes PA4 output pin
	PORTA = 0x00;
	
	while(1)
	{
		//Rotate Motor to 0 degree
		PORTA = 0x30;
		_delay_us(1000);
		PORTA = 0x00;
		
		_delay_ms(2000);
		
		//Rotate Motor to 90 degree
		PORTA = 0x30;
		_delay_us(1500);
		PORTA = 0x00;
		
		_delay_ms(2000);
	}
}

