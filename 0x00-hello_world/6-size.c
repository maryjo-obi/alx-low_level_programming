#include <stdio.h>

/**
<<<<<<< HEAD
 * main - is the entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main (void)
{
	int a;
	long int int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %ld byte(s)\n", size of(char));
	printf("Size of an int: %ld byte(s)\n", size of(int));
	printf("Size of long int: %ld byte(s)\n", size of(long int));
	printf("Size of long long int: %ld byte(s)\n", size of(long long int));
	printf("Size of a float: %ld byte(s)\n", size of(float));
=======
 * main-entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

>>>>>>> 04354df79d65f9758b9dbec79d7b1e9adacc08f0
	return (0);
}
