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
volatile int i;
char text[] = {'H','E','L','L','O',' ','W','O','R','L','D'};

ISR(PCINT0_vect)
{
  while (PINB & 0b00000001)
  {
    i = i + 1;
    PORTB = 0b00000010;
    //PORTD = fonty >> 1;
  }
  clearLED();
}


ISR(TIMER1_COMPA_vect)
{
  PORTB = 0b00000010;
//  PORTD = fonty >> 1;
}

void init (void)
{
  DDRD = 0b11111111;
  DDRB = 0b11111110;
  PORTB = 0b00000001;

  i = 0;

  PCICR |= (1 << PCIE0); // Pin Change Interrupt initialization
  PCMSK0 |= (1 << PCINT0); //Used for measuring sensor input on PINB0

  TCCR1B = (0 << WGM12)  | (0 << CS12)   | (1 << CS11)   | (1 << CS10);
  TCCR0B = (1 << CS02)   | (0 << CS01)   | (1 << CS00);
  TIMSK1 = (0 << ICIE1)  | (0 << OCIE1B) | (0 << OCIE1A) | (1 << TOIE0);
  TIMSK0 = (1 << OCIE0A) | (1 << TOIE0);

  // Initialize counters at 0
  TCNT1 = 0;
  TCNT0 = 0;
  OCR0A = 255;
  ICR1 = 31250;
  sei();
}

void clearLED()
{
  PORTB = 0b00000001;
  PORTD = 0b00000000;
}

void recalcPeriod()
{
  frac = floor(TCNT1/360);
  OCR0A = frac; // Setting compare vector for TIMER0 to frac
}


int main (void)
{
  init();
  while(1)
  {
    if (i < 3)
    {
      PORTD = 0b01010101;
    } else
    {
      PORTD = 0b00001111;
    }

    //fonty = fontArray[letterGetter(text[i])][a];
  }
}
