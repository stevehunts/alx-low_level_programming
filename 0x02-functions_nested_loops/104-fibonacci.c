#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long first = 1, second = 2, next;
	int count;

	/* Print the first two Fibonacci numbers */
	printf("%lu, %lu", first, second);

	/* Print the rest of the Fibonacci numbers */
	for (count = 3; count <= 98; ++count)
	{
		/* Calculate the next term in the Fibonacci sequence */
		next = first + second;

		/* Print comma and space before the number */
		printf(", %lu", next);

		/* Update 'first' and 'second' for the next iteration */
		first = second;
		second = next;
	}

	printf("\n"); /* Print newline at the end */

	return (0);
}

