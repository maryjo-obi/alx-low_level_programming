#include <stdio.h>

/**
 * main - print the alphabeth in lowercase
 *
 * Return: 0
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z';letter++)             putchar(letter);

	putchar('\');

	return (0);
}

