#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci
 * Return: Always 0.
 */
int main(void)
{
	int n = 50;
	int first = 1, second = 2, next;
	int i;

	printf("%d", first);

	for (i = 1; i < n; i++)
	{
		printf(", %d", second);
		next = first + second;
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}

