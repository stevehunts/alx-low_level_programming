#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers separated by commas
 *        using a loop.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 50;
	int first = 1, second = 2, next;
	int i;

	printf("%d, %d", first, second);

	for (i = 2; i < n; i++)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}

