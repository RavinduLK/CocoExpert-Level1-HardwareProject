#include <avr/io.h>

int main()
{
	DDRB = 0x20; //Makes PORTC as output
	DDRD = 0x00; //Makes PORTD as Input to get signal from Ultrasonic sensor
	PORTD = 0xFF; // Enable The PullUps of PORTD.
	while(1)
	{
		if(PIND==0x01) // Read the signal from Ultrasonic sensor and Turn ON/OFF the Buzzer
		{
			PORTB=0x20;
		}
		else
		{
			PORTB=0x00;
		}
	return 0;
}
}
