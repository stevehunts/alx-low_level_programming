#include "main.h"

/**
 * find_sqrt - helper function to find sqrt recursively
 * @n: number to find sqrt of
 * @root: current guess for sqrt
 *
 * Return: natural sqrt of n, or -1 if none exists
 */
int find_sqrt(int n, int root);

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: number to calculate sqrt of
 *
 * Return: natural sqrt of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function to find sqrt recursively
 * @n: number to find sqrt of
 * @root: current guess for sqrt
 *
 * Return: natural sqrt of n, or -1 if none exists
 */
int find_sqrt(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	else if (root * root == n)
	{
		return (root);
	}
	else
	{
		return (find_sqrt(n, root + 1));
	}
}

