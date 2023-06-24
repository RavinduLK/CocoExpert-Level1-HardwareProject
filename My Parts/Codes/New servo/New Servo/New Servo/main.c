#ifndef F_CPU
#define F_CPU 8000000UL // 16 MHz clock sp
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0x01; //Makes PC0 output pin
	PORTC = 0x00;
	DDRD = 0x01; //Makes PD0 output pin
	PORTD = 0x00;
	
	while(1)
	{
		//the point coconut is fixed to the handle
		//rotate towards the scraper
		PORTC = 0x01;
		PORTD = 0x01;
		//_delay_us(1000);
		PORTC = 0x00;
		PORTD = 0x00;

		_delay_ms(5000); //time which is coconut will scrape

		//returning to the starting point
		PORTC = 0x01;
		PORTD = 0x01;
		//_delay_us(1500);
		PORTC = 0x00;
		PORTD = 0x00;

		_delay_ms(5000);
	}
}

