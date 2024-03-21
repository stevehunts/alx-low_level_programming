#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num = 1;
	unsigned int i;

	for (i = 0; i < power; i++)
	{
		num *= base;
	}

	return (num); /* Corrected return statement with parentheses */
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor;
	int started = 0; /* Tracking if we've started printing non-zero bits */

	if (n == 0)
	{
		_putchar('0');
		return; /* Corrected return statement with parentheses */
	}

	for (divisor = _pow(2, sizeof(n) * 8 - 1); divisor > 0; divisor >>= 1)
	{
		if (n & divisor)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
	}
}

