#include <avr/io.h>
#include <util/delay.h>

#define portd PORTA //output port				-- change this to change port
#define ddrd DDRA //output register  			-- change this to change the output 
#define DELAY 150 //delay time in micro-seconds -- change this to change delay


int main(void)
{
	
    ddrd = 0xFF; //output register

    while(1)
    {
		//print(' '); 	//ADD your message here as i have added this
		print('H');		//Make sure you put spaces at the end of your message
		print('E');
		print('L');
		print('L');
		print('O');
		print(' ');
		print('W');
		print('O');
		print('R');
		print('L');
		print('D');
		print(' ');
		print(' ');
		print(' ');
		print(' ');
		print(' ');
    }
}


void delay() //standard delay
{
    
	_delay_us(DELAY); //150us is the initial delay
}

void print(unsigned char disp) //functios of printing letters
{
    switch (disp) //the shifting is used so that the bit starts from PINA0 and not A1
    {

    case ' ':
    {
        portd= 0b00000000 >> 1 ; //Right shift of bits
        delay();
        portd= 0b00000000 >> 1 ;
        delay();
        portd= 0b00000000 >> 1 ;
        delay();
        portd= 0b00000000 >> 1 ;
        delay();
        portd= 0b00000000 >> 1 ;
        delay();
        portd= 0b00000000 >> 1 ;
        delay();
        break;

    }


    case 'A':
    {
        portd= 0b01111110 >> 1 ;
        delay();
        portd= 0b10010000 >> 1 ;
        delay();
        portd= 0b10010000 >> 1 ;
        delay();
        portd= 0b10010000 >> 1 ;
        delay();
        portd= 0b10010000 >> 1 ;
        delay();
        portd= 0b01111110 >> 1 ;
        delay();
        break;
    }

    case 'B':
    {
        portd= 0b11111110 >> 1 ;
        delay();
        portd= 0b10010010 >> 1 ;
        delay();
        portd= 0b10010010 >> 1 ;
        delay();
        portd= 0b01011010 >> 1 ;
        delay();
        portd= 0b00100100 >> 1 ;
        delay();
        portd= 0b00000000 >> 1 ;
        delay();
        break;

    }


  case 'C':
    {
        portd= 0b00111000 >> 1 ;
		delay();
		portd= 0b01000100 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }


    case 'D':
    {
        portd= 0b11111110 >> 1 ;
        delay();
        portd= 0b10000010 >> 1 ;
        delay();
        portd= 0b10000010 >> 1 ;
        delay();
        portd= 0b01000100 >> 1 ;
        delay();
        portd= 0b00111000 >> 1 ;
        delay();
        portd= 0b00000000 >> 1 ;
        delay();
        break;

    }


  case 'E':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }

  case 'F':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10010000 >> 1 ;
		delay();
		portd= 0b10010000 >> 1 ;
		delay();
		portd= 0b10010000 >> 1 ;
		delay();
		portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'G':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10001110 >> 1 ;
		delay();
		portd= 0b10001000 >> 1 ;
		delay();
		portd= 0b10001110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }

  case 'H':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }

  case 'I':
    {
        portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }


 case 'J':
    {
        portd= 0b10000100 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'K':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b00101000 >> 1 ;
		delay();
		portd= 0b01000100 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'L':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'M':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b01000000 >> 1 ;
		delay();
		portd= 0b00100000 >> 1 ;
		delay();
		portd= 0b01000000 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'N':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b01000000 >> 1 ;
		delay();
		portd= 0b00111000 >> 1 ;
		delay();
		portd= 0b00000100 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'O':
    {
        portd= 0b01111100 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b01111100 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'P':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10001000 >> 1 ;
		delay();
		portd= 0b10001000 >> 1 ;
		delay();
		portd= 0b10001000 >> 1 ;
		delay();
		portd= 0b01110000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'Q':
    {
        portd= 0b01111000 >> 1 ;
		delay();
		portd= 0b10000100 >> 1 ;
		delay();
		portd= 0b10001100 >> 1 ;
		delay();
		portd= 0b10000100 >> 1 ;
		delay();
		portd= 0b01111010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'R':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10001000 >> 1 ;
		delay();
		portd= 0b10001100 >> 1 ;
		delay();
		portd= 0b01010010 >> 1 ;
		delay();
		portd= 0b00100010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'S':
    {
        portd= 0b01000100 >> 1 ;
		delay();
		portd= 0b10100010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10001010 >> 1 ;
		delay();
		portd= 0b01000100 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'T':
    {
        portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'U':
    {
        portd= 0b11111100 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'V':
    {
        portd= 0b11111000 >> 1 ;
		delay();
		portd= 0b00000100 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00000100 >> 1 ;
		delay();
		portd= 0b11111000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'W':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00001000 >> 1 ;
		delay();
		portd= 0b00000100 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'X':
    {
        portd= 0b11000110 >> 1 ;
		delay();
		portd= 0b00101000 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b00101000 >> 1 ;
		delay();
		portd= 0b11000110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'Y':
    {
        portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b01000000 >> 1 ;
		delay();
		portd= 0b00111110 >> 1 ;
		delay();
		portd= 0b01000000 >> 1 ;
		delay();
		portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case 'Z':
    {
        portd= 0b10000110 >> 1 ;
		delay();
		portd= 0b10001010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10100010 >> 1 ;
		delay();
		portd= 0b11000010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }

    //numbers
     case '0':
    {
        portd= 0b01111110 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b01111100 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '1':
    {
        portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00100010 >> 1 ;
		delay();
		portd= 0b01000010 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '2':
    {
        portd= 0b10011110 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b11110010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '3':
    {
        portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '4':
    {
        portd= 0b11110000 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '5':
    {
        portd= 0b11110010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10011110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '6':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10011110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();

        break;
    }

     case '7':
    {
        portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b10011110 >> 1 ;
		delay();
		portd= 0b10100000 >> 1 ;
		delay();
		portd= 0b11000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '8':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
     case '9':
    {
        portd= 0b11110010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b10010010 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }

    // Special character

    /*  case '*':
    {
        portd= 0b11010110 >> 1 ;
		delay();
		portd= 0b00111000 >> 1 ;
		delay();
		portd= 0b00010000 >> 1 ;
		delay();
		portd= 0b00111000 >> 1 ;
		delay();
		portd= 0b11010110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '#':
    {
        portd= 0b00101000 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00101000 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00101000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case ',':
    {
        portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00001010 >> 1 ;
		delay();
		portd= 0b00001100 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '.':
    {
        portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000110 >> 1 ;
		delay();
		portd= 0b00000110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '(':
    {
        portd= 0b00111000 >> 1 ;
		delay();
		portd= 0b01000100 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case ')':
    {
        portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b01000100 >> 1 ;
		delay();
		portd= 0b00111000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '[':
    {
        portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case ']':
    {
        portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b10000010 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
      case '?':
    {
        portd= 0b10000000 >> 1 ;
		delay();
		portd= 0b11111110 >> 1 ;
		delay();
		portd= 0b00000010 >> 1 ;
		delay();
		portd= 0b00001010 >> 1 ;
		delay();
		portd= 0b00001100 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }
	
	 case '!':
    {
        portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b11111010 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
		portd= 0b00000000 >> 1 ;
		delay();
        break;

    }

	*/
    }
}




