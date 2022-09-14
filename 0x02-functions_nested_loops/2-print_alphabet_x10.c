#include "main.h"

 /**
  * print_alphabet_x10: Writes a function that prints x10 the alphabet.
  *  in lowercase,followed by a new line.
  */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar(0);
	}
}
