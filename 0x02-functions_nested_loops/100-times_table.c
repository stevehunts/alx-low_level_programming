#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table starting with 0
 * @n: The number up to which the times table should be printed
 *
 * Description: Prints the multiplication table from 0 to n inclusive.
 * If n is greater than 15 or less than 0, nothing is printed.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j > 0)
			{
				putchar(',');
				if (result < 10)
					printf("   ");
				else if (result < 100)
					printf("  ");
			}
			printf("%d", result);
		}
		putchar('\n');
	}
}

