/*
ATmega8, 48, 88, 168, 328

/Reset PC6|1   28|PC5
       PD0|2   27|PC4
       PD1|3   26|PC3
       PD2|4   25|PC2
       PD3|5   24|PC1
       PD4|6   23|PC0
       Vcc|7   22|Gnd
       Gnd|8   21|Aref
       PB6|9   20|AVcc
       PB7|10  19|PB5 SCK
       PD5|11  18|PB4 MISO
       PD6|12  17|PB3 MOSI
       PD7|13  16|PB2
LED    PB0|14  15|PB1
*/

#define  F_CPU 8000000UL // defines the clock frequency as 8 MHz (unsigned long)
#include <avr/io.h>      // defines all macros and symbols
#include <util/delay.h>  // defines time delay functions
#include <avr/interrupt.h> // defines interrupt-
#include "print.h"
#include <stdio.h>

uint16_t frac = 255;
volatile uint8_t fonty;
volatile int a;
volatile uint8_t i;


char text[] = {'A','A','H',' ',' ',' '};

void clearLED()
{
  PORTB = 0b00000001;
  PORTC = 0b00000000;
  PORTD = 0b00000000;
}

ISR(PCINT0_vect)
{
  clearLED();
  //OCR0A = (TCNT1/360);
  while (PINB & 0b00000001)
  {
    PORTC = 0b11111111;
  }
  i = 0;
  a = 0;
  TCNT0 = 0;
  TCNT1 = 0;
}


ISR(TIMER0_COMPA_vect)
{
  //PORTB = 0b00000010;
  PORTD = fontArray[letterGetter(text[a])][i] >> 1;
  i++;
  if (i > 5)
  {
    i = 0;
    a++;
  }
  a = a % sizeof(text);
  TCNT0 = 0;
//  PORTD = fonty >> 1;
}

void init (void)
{

  DDRD = 0b11111111;
  DDRB = 0b11111110;
  DDRC = 0b11111111;
  PORTB = 0b00000001;

  PCICR |= (1 << PCIE0);  // Pin Change Interrupt initialization
  PCMSK0 |= (1 << PCINT0); //Used for measuring sensor input on PINB0

  TCCR1B = (1 << CS12)   | (0 << CS11)   | (1 << CS10);
  TCCR0B = (1 << CS02)   | (0 << CS01)   | (0 << CS00);
  TIMSK1 = (0 << OCIE1A);
  TIMSK0 = (1 << OCIE0A);
  OCR0A = 20;

  sei();
}



int main (void)
{
  i = 0;
  init();
  while(1)
  {
  }
}
