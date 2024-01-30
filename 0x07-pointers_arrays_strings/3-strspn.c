#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string to be scanned
 * @accept: the string containing the list of characters to match in s
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *start_accept = accept;

	while (*s)
	{
		while (*accep)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
			accept++;
		}
		if (!*accept)
		{
			break;
		}
		accept = start_accept;
		s++;
	}

	return (count);
}

