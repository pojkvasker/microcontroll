// letters to print with the rotating fan //


#include <avr/io.h>      // defines all macros and symbols
#include <util/delay.h>  // defines time delay functions
#include <avr/interrupt.h> // defines interrupt-
extern int frac;

void delay() //standard delay
{
	int count = 0;
	while(count < frac)
	{
		_delay_us(1);
		count +=1;
	}
}



void print(unsigned char disp) //functions of printing letters
{
    switch (disp) //the shifting is used so that the bit starts from PINA0 and not A1
    {

    case ' ':
    {
        PORTD= 0b00000000 >> 1 ; //Right shift of bits
        delay();
        PORTD= 0b00000000 >> 1 ;
        delay();
        PORTD= 0b00000000 >> 1 ;
        delay();
        PORTD= 0b00000000 >> 1 ;
        delay();
        PORTD= 0b00000000 >> 1 ;
        delay();
        PORTD= 0b00000000 >> 1 ;
        delay();
        break;

    }



    case 'A':
    {
        PORTD= 0b01111110 >> 1 ;
        delay();
        PORTD= 0b10010000 >> 1 ;
        delay();
        PORTD= 0b10010000 >> 1 ;
        delay();
        PORTD= 0b10010000 >> 1 ;
        delay();
        PORTD= 0b10010000 >> 1 ;
        delay();
        PORTD= 0b01111110 >> 1 ;
        delay();
        break;
    }

    case 'B':
    {
        PORTD= 0b11111110 >> 1 ;
        delay();
        PORTD= 0b10010010 >> 1 ;
        delay();
        PORTD= 0b10010010 >> 1 ;
        delay();
        PORTD= 0b01011010 >> 1 ;
        delay();
        PORTD= 0b00100100 >> 1 ;
        delay();
        PORTD= 0b00000000 >> 1 ;
        delay();
        break;

    }


  case 'C':
    {
        PORTD= 0b00111000 >> 1 ;
		delay();
		PORTD= 0b01000100 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }


    case 'D':
    {
        PORTD= 0b11111110 >> 1 ;
        delay();
        PORTD= 0b10000010 >> 1 ;
        delay();
        PORTD= 0b10000010 >> 1 ;
        delay();
        PORTD= 0b01000100 >> 1 ;
        delay();
        PORTD= 0b00111000 >> 1 ;
        delay();
        PORTD= 0b00000000 >> 1 ;
        delay();
        break;

    }


  case 'E':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }

  case 'F':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10010000 >> 1 ;
		delay();
		PORTD= 0b10010000 >> 1 ;
		delay();
		PORTD= 0b10010000 >> 1 ;
		delay();
		PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'G':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10001110 >> 1 ;
		delay();
		PORTD= 0b10001000 >> 1 ;
		delay();
		PORTD= 0b10001110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }

  case 'H':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }

  case 'I':
    {
        PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }


 case 'J':
    {
        PORTD= 0b10000100 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'K':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b00101000 >> 1 ;
		delay();
		PORTD= 0b01000100 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'L':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'M':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b01000000 >> 1 ;
		delay();
		PORTD= 0b00100000 >> 1 ;
		delay();
		PORTD= 0b01000000 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'N':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b01000000 >> 1 ;
		delay();
		PORTD= 0b00111000 >> 1 ;
		delay();
		PORTD= 0b00000100 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'O':
    {
        PORTD= 0b01111100 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b01111100 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'P':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10001000 >> 1 ;
		delay();
		PORTD= 0b10001000 >> 1 ;
		delay();
		PORTD= 0b10001000 >> 1 ;
		delay();
		PORTD= 0b01110000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'Q':
    {
        PORTD= 0b01111000 >> 1 ;
		delay();
		PORTD= 0b10000100 >> 1 ;
		delay();
		PORTD= 0b10001100 >> 1 ;
		delay();
		PORTD= 0b10000100 >> 1 ;
		delay();
		PORTD= 0b01111010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'R':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10001000 >> 1 ;
		delay();
		PORTD= 0b10001100 >> 1 ;
		delay();
		PORTD= 0b01010010 >> 1 ;
		delay();
		PORTD= 0b00100010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'S':
    {
        PORTD= 0b01000100 >> 1 ;
		delay();
		PORTD= 0b10100010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10001010 >> 1 ;
		delay();
		PORTD= 0b01000100 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'T':
    {
        PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'U':
    {
        PORTD= 0b11111100 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'V':
    {
        PORTD= 0b11111000 >> 1 ;
		delay();
		PORTD= 0b00000100 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00000100 >> 1 ;
		delay();
		PORTD= 0b11111000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'W':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00001000 >> 1 ;
		delay();
		PORTD= 0b00000100 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'X':
    {
        PORTD= 0b11000110 >> 1 ;
		delay();
		PORTD= 0b00101000 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b00101000 >> 1 ;
		delay();
		PORTD= 0b11000110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'Y':
    {
        PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b01000000 >> 1 ;
		delay();
		PORTD= 0b00111110 >> 1 ;
		delay();
		PORTD= 0b01000000 >> 1 ;
		delay();
		PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'Z':
    {
        PORTD= 0b10000110 >> 1 ;
		delay();
		PORTD= 0b10001010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10100010 >> 1 ;
		delay();
		PORTD= 0b11000010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }

    //numbers
     case '0':
    {
        PORTD= 0b01111110 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b01111100 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '1':
    {
        PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00100010 >> 1 ;
		delay();
		PORTD= 0b01000010 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '2':
    {
        PORTD= 0b10011110 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b11110010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '3':
    {
        PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '4':
    {
        PORTD= 0b11110000 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '5':
    {
        PORTD= 0b11110010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10011110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '6':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10011110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
    break;
    }

     case '7':
    {
        PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b10011110 >> 1 ;
		delay();
		PORTD= 0b10100000 >> 1 ;
		delay();
		PORTD= 0b11000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '8':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '9':
    {
        PORTD= 0b11110010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b10010010 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }

    // Special character

    /*  case '*':
    {
        PORTD= 0b11010110 >> 1 ;
		delay();
		PORTD= 0b00111000 >> 1 ;
		delay();
		PORTD= 0b00010000 >> 1 ;
		delay();
		PORTD= 0b00111000 >> 1 ;
		delay();
		PORTD= 0b11010110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '#':
    {
        PORTD= 0b00101000 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00101000 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00101000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case ',':
    {
        PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00001010 >> 1 ;
		delay();
		PORTD= 0b00001100 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '.':
    {
        PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000110 >> 1 ;
		delay();
		PORTD= 0b00000110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '(':
    {
        PORTD= 0b00111000 >> 1 ;
		delay();
		PORTD= 0b01000100 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case ')':
    {
        PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b01000100 >> 1 ;
		delay();
		PORTD= 0b00111000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '[':
    {
        PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case ']':
    {
        PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b10000010 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '?':
    {
        PORTD= 0b10000000 >> 1 ;
		delay();
		PORTD= 0b11111110 >> 1 ;
		delay();
		PORTD= 0b00000010 >> 1 ;
		delay();
		PORTD= 0b00001010 >> 1 ;
		delay();
		PORTD= 0b00001100 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }

	 case '!':
    {
        PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b11111010 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
		PORTD= 0b00000000 >> 1 ;
		delay();
        break;

    }

	*/
  }
}
