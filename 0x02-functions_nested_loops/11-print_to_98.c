#include "main.h"
#include <stdio.h>
<<<<<<< HEAD
/**
 * print_to_98 - prints all natural numbers from n to 98 
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
=======

/**
 * print_to_98 - Write a function that prints all natural numbers from
 * n to 98, followed by a new line.
 *
 * @n: Random interger.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i, a;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		} else if (i == 98)
		{
			printf("%d\n", i);
		}
	}
	}
	else if (n >= 98)
	{
	for (a = n; a >= 98; a--)
	{
		if (a != 98)
		{
			printf("%d, ", a);
		} else if (a == 98)
		{
			printf("%d\n", a);
		}
	}
	}
>>>>>>> 199ca760c5ac3e99fa01828a349406a13cc3eece
}
