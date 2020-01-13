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

#define  F_CPU 1000000UL // defines the clock frequency as 1 MHz (unsigned long)
#include <avr/io.h>      // defines all macros and symbols
#include <util/delay.h>  // defines time delay functions
#include <avr/interrupt.h> // defines interrupt-
#include "print.h"
#include <stdio.h>

volatile int i;
int frac = 1000000;
char text[] = {'H','E','L','L','O',' ','W','O','R','L','D'};

ISR(PCINT0_vect)
{
  spinTimer();
  while (PINB & 0b00000001)
  {
    PORTB = 0b00000010;

  }

  clearLED();
  i = 0;
}

ISR(TIMER0_COMPA_vect)
{

}

ISR(TIMER1_OVF_vect)
{
  //PORTB = 0b00000010;
  i = 0;
}


void init (void)
{
  DDRD = 0b11111111;
  DDRB = 0b11111110;
  PORTB = 0b00000001;

  PCICR |= (1 << PCIE0); // Pin Change Interrupt initialization
  PCMSK0 |= (1 << PCINT0); //Used for measuring sensor input on PINB0

  TCCR1B = (0 << CS12)   | (1 << CS11)   | (1 << CS10);
  TIMSK1 = (0 << OCIE1B) | (0 << OCIE1A) | (1 << TOIE0);
  TIMSK0 = (1 << OCIE0A);


  sei();
}


int main (void)
{
  init();
  while(1)
  {
    clearLED();
    displayRoutine();
  }
}

void clearLED()
{
  PORTB = 0b00000001;
  PORTD = 0b00000000;
}

void displayRoutine()
{
    print(text[i]);
    if (i == sizeof(text))
    {
      i=0;
    }
}



void spinTimer()
{
  frac = floor(TCNT1/10);
  TCNT1 = 0;
}