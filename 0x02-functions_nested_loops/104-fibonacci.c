#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int first = 1, second = 2, next;

	printf("%ld, %ld", first, second);

	for (i = 3; i <= 98; ++i)
	{
		next = first + second;
		printf(", %ld", next);

		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}

