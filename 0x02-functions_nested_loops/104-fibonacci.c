#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by commas
 *              without exceeding 4,000,000. Numbers are followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, c;

	printf("%ld, %ld", a, b);

	for (int i = 3; i <= 98; ++i)
	{
		c = a + b;
		printf(", %ld", c);

		a = b;
		b = c;
	}

	printf("\n");

	return 0;
}

