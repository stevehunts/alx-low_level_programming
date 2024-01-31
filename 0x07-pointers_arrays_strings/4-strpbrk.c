#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the main string to be scanned
 * @accept: the string containing the list of characters to match in s
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a_ptr;

	while (*s)
	{
		for (a_ptr = accept; *a_ptr; a_ptr++)
		{
			if (*s == *a_ptr)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

