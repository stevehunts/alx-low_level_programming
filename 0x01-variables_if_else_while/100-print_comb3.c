#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}

