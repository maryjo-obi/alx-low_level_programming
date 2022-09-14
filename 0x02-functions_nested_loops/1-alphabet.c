#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description - print alphabet in lowercase
 * followed by a new line
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha =  'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putcha('\n')
}
