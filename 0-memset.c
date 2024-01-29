#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area to be filled.
 * @b: constant byte to fill with.
 * @n: number of bytes to fill.
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

