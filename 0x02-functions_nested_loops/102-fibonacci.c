#include <stdio.h>
/**
 * main - Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int n = 50;
	int first = 1, second = 2, next;

	printf("%d, %d", first, second);

	for (int i = 2; i < n; i++)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}

