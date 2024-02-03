#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, -1 if n is lower than 0 to indicate an error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

