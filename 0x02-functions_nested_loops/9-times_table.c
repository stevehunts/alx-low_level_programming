#include "main.h"

/**
 * times_table - Prints the multiplication table from 0 to 9.
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
				_putchar('0');
			else if (result < 10)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');

			if (j != 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}

