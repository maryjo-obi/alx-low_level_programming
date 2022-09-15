#include "main.h"

/**
 * _isdigit - checks digit for a (0-9).
 * @c: The number to be checked.
 *
 * Return: 1 if c is a digit returns 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
