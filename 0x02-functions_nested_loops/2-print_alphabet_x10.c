#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 *  in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	char ch = 1;

	while (ch <= 10)
	{
<<<<<<< HEAD
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
=======
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		ch++;
>>>>>>> 199ca760c5ac3e99fa01828a349406a13cc3eece
	}
}
