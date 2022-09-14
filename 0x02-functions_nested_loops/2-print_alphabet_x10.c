#include "main.h"

 /**
  * print_alphabet_x10 - main entry point.
  *
  * Description: prints x10 the alphabe in lowercase.
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
