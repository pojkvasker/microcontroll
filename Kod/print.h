// letters to print with the rotating fan //


#include <avr/io.h>      // defines all macros and symbols
#include <util/delay.h>  // defines time delay functions
#include <avr/interrupt.h> // defines interrupt-


uint8_t fontArray[37][6] =
{
	{ // ' ' 0
		 0b00000000,
	   0b00000000,
	   0b00000000,
	   0b00000000,
	   0b00000000,
	   0b00000000
	 },

	{ // 'A' 1
	   0b01111110,
	   0b10010000,
	   0b10010000,
	   0b10010000,
	   0b10010000,
	   0b01111110
	 },

	 { // 'B' 2
	   0b11111110  ,
	   0b10010010  ,
	   0b10010010  ,
	   0b01011010  ,
	   0b00100100  ,
	   0b00000000
	 },


	{ // 'C' 3
		0b00111000,
	 	0b01000100,
	 	0b10000010,
	 	0b10000010,
	 	0b10000010,
	 	0b00000000
	},

	{ // 'D' 4
	   0b11111110  ,
	   0b10000010  ,
	   0b10000010  ,
	   0b01000100  ,
	   0b00111000  ,
	   0b00000000
	},

	{ // 'E' 5
		0b11111110  ,
	 	0b10010010  ,
	 	0b10010010  ,
	 	0b10010010  ,
	 	0b10000010  ,
	 	0b00000000
	},

	{	 //'F' 6
	    0b11111110  ,
		 	0b10010000  ,
		 	0b10010000  ,
		 	0b10010000  ,
		 	0b10000000  ,
		 	0b00000000
	 },

		{ // 'G' 7
	    0b11111110  ,
		 	0b10000010  ,
		 	0b10001110  ,
		 	0b10001000  ,
		 	0b10001110  ,
		 	0b00000000
	 },

	 { // 'H' 8
	   0b11111110  ,
		 0b00010000  ,
		 0b00010000  ,
		 0b00010000  ,
		 0b11111110  ,
		 0b00000000
	 },

	{ // 'I' 9
	   0b10000010  ,
		 0b10000010  ,
		 0b11111110  ,
		 0b10000010  ,
		 0b10000010  ,
		 0b00000000
	 },
	{ //'J' 10
	   0b10000100  ,
		 0b10000010  ,
		 0b10000010  ,
		 0b11111110  ,
		 0b10000000  ,
		 0b00000000
	 },

	{ //'K'11
	    0b11111110  ,
		 	0b00010000  ,
		 	0b00101000  ,
		 	0b01000100  ,
		 	0b10000010  ,
		 	0b00000000
	},

	{ //'L' 12
	   0b11111110  ,
		 0b00000010  ,
		 0b00000010  ,
		 0b00000010  ,
		 0b00000010  ,
		 0b00000000
	 },

	 { //' M' 13
	  	0b11111110  ,
		 	0b01000000  ,
		 	0b00100000  ,
		 	0b01000000  ,
		 	0b11111110  ,
		 	0b00000000
		},

		{ //'N' 14
	   0b11111110  ,
		 0b01000000  ,
		 0b00111000  ,
		 0b00000100  ,
		 0b11111110  ,
		 0b00000000   },

		 { //'O' 15
	   0b01111100  ,
		 0b10000010  ,
		 0b10000010  ,
		 0b10000010  ,
		 0b01111100  ,
		 0b00000000  },

	 	{ //'P' 16
	    0b11111110  ,
		 	0b10001000  ,
		 	0b10001000  ,
		 	0b10001000  ,
		 	0b01110000  ,
		 	0b00000000  },

		{ //Q 17
	    0b01111000  ,
		 	0b10000100  ,
		 	0b10001100  ,
		 	0b10000100  ,
		 	0b01111010  ,
		 	0b00000000  },

		{ //R 18
	    0b11111110  ,
		 	0b10001000  ,
		 	0b10001100  ,
		 	0b01010010  ,
		 	0b00100010  ,
		 	0b00000000  },

		{ //S 19
	   0b01000100  ,
		 0b10100010  ,
		 0b10010010  ,
		 0b10001010  ,
		 0b01000100  ,
		 0b00000000  },

		 { //T 20
	   0b10000000  ,
		 0b10000000  ,
		 0b11111110  ,
		 0b10000000  ,
		 0b10000000  ,
		 0b00000000  },

		 { //U 21
	  	0b11111100  ,
		 	0b00000010  ,
		 	0b00000010  ,
		 	0b00000010  ,
		 	0b11111100  ,
		 	0b00000000  },

			{ //V 22
	  	0b11111000  ,
		 	0b00000100  ,
		 	0b00000010  ,
		 	0b00000100  ,
		 	0b11111000  ,
		 	0b00000000  },

			{ //W 23
	   0b11111110  ,
		 0b00000010  ,
		 0b00001000  ,
		 0b00000100  ,
		 0b11111110  ,
		 0b00000000  },

		 { //X 24
	    0b11000110  ,
		 	0b00101000  ,
		 	0b00010000  ,
		 	0b00101000  ,
		 	0b11000110  ,
		 	0b00000000  },

			{ //Y 25
	    0b10000000  ,
		 	0b01000000  ,
		 	0b00111110  ,
		 	0b01000000  ,
		 	0b10000000  ,
		 	0b00000000  },

			{ //Z 26
	    0b10000110  ,
		 	0b10001010  ,
		 	0b10010010  ,
		 	0b10100010  ,
		 	0b11000010  ,
		 	0b00000000  },

				{ //0 27
	    0b01111110  ,
		 	0b10000010  ,
		 	0b10000010  ,
		 	0b10000010  ,
		 	0b01111100  ,
		 	0b00000000  },

				{ //1 28
	    0b00000000  ,
		 	0b00100010  ,
		 	0b01000010  ,
		 	0b11111110  ,
		 	0b00000010  ,
		 	0b00000000  },

			{ //2 29
	    0b10011110  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b11110010  ,
		 	0b00000000  },

			{//3 30
	    0b10010010  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b11111110  ,
		 	0b00000000  },

			{//4 31
	    0b11110000  ,
		 	0b00010000  ,
		 	0b00010000  ,
		 	0b00010000  ,
		 	0b11111110  ,
		 	0b00000000  },

			{//5 32
	    0b11110010  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b10011110  ,
		 	0b00000000  },

			{//6 33
	    0b11111110  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b10011110  ,
		 	0b00000000  },

			{//7 34
	    0b10000000  ,
		 	0b10000000  ,
		 	0b10011110  ,
		 	0b10100000  ,
		 	0b11000000  ,
		 	0b00000000  },

			{//8 35
	    0b11111110  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b11111110  ,
		 	0b00000000  },

			{//9 36
	    0b11110010  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b10010010  ,
		 	0b11111110  ,
		 	0b00000000  },
};

int letterGetter(unsigned char disp)
{
	int num;
	switch(disp)
	{
		case ' ':
		{
			num = 0;
			break;
		}

		case 'A':
		{
			num = 1;
			break;
		}

		case 'B':
		{
			num = 2;
			break;
		}

		case 'C':
		{
			num = 3;
			break;
		}

		case 'D':
		{
			num = 4;
			break;
		}

		case 'E':
		{
			num = 5;
			break;
		}

		case 'F':
		{
			num = 6;
			break;
		}

		case 'G':
		{
			num = 7;
			break;
		}

		case 'H':
		{
			num = 8;
			break;
		}

		case 'I':
		{
			num = 9;
			break;
		}

		case 'J':
		{
			num = 10;
			break;
		}

		case 'K':
		{
			num = 11;
			break;
		}

		case 'L':
		{
			num = 12;
			break;
		}

		case 'M':
		{
			num = 13;
			break;
		}

		case 'N':
		{
			num = 14;
			break;
		}

		case 'O':
		{
			num = 15;
			break;
		}

		case 'P':
		{
			num = 16;
			break;
		}

		case 'Q':
		{
			num = 17;
			break;
		}

		case 'R':
		{
			num = 18;
			break;
		}

		case 'S':
		{
			num = 19;
			break;
		}

		case 'T':
		{
			num = 20;
			break;
		}

		case 'U':
		{
			num = 21;
			break;
		}

		case 'V':
		{
			num = 22;
			break;
		}

		case 'W':
		{
			num = 23;
			break;
		}

		case 'X':
		{
			num = 24;
			break;
		}

		case 'Y':
		{
			num = 25;
			break;
		}

		case 'Z':
		{
			num = 26;
			break;
		}

		case '0':
		{
			num = 27;
			break;
		}

		case '1':
		{
			num = 28;
			break;
		}

		case '2':
		{
			num = 29;
			break;
		}

		case '3':
		{
			num = 30;
			break;
		}

		case '4':
		{
			num = 31;
			break;
		}

		case '5':
		{
			num = 32;
			break;
		}

		case '6':
		{
			num = 33;
			break;
		}

		case '7':
		{
			num = 34;
			break;
		}

		case '8':
		{
			num = 35;
			break;
		}

		case '9':
		{
			num = 36;
			break;
		}
	}
	return num;
}

/* void print(unsigned char disp, int part)
{

	PORTD = fontArray[letterGetter(disp)][part] >> 1;

}
*/
