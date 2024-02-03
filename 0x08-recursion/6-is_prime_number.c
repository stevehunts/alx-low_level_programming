#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - determines if a number is a prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* Not prime */
	}
	else
	{
		return (check_prime(n, 2)); /* Start checks from 2 */
	}
}

/**
 * check_prime - helper function to check primality
 * @n: number to check
 * @i: current divisor to check
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}

