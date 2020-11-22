/*
 * blinking_led.c
 *
 * Created: 10/06/2020 16:38:06
 * Author : Przemek
 */ 

#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>

int main(void)
{
	DDRB  = 0b00000010;
	PORTB = 0b00000000;
	
	while (1){
		PORTB = 0b00000000;
		_delay_ms(500);
		PORTB = 0b00000010;
		_delay_ms(500);
	}
}













/* PART 1 */
// #include <util/delay.h>
// #define F_CPU 1000000UL

	/* volatile int8_t x = 10;
	volatile int8_t y = 5;
	
	while (1){
		x = x + 10;
		y = y + 5;
		x = x + y;
	}
	
	return 0;
	
		int8_t a, b, c;	   // 0  1  -50  125
		
		a = 10;
		b = 20;
		
		c = a + b;
		c = a - b;
		c = a * b;
		c = a / b;
		
		c = 10;
		
	*/

/* PART 2 */
	/*_delay_ms(2000);*/
	
	/*	DDRB  = 0b00000010;
	
	while (1){
		PORTB = 0b00000000;
		//PORTB = 0b00000000;
		//_delay_ms(500);
		//PORTB = 0b00000010;
		//_delay_ms(500);
	}
				
	return 0;*/