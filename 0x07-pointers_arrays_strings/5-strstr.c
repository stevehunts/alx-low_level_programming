#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h_ptr = haystack;
	char *n_ptr = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*h_ptr)
	{
		char *start = h_ptr;

		n_ptr = needle;

		while (*h_ptr && *n_ptr && *h_ptr == *n_ptr)
		{
			h_ptr++;
			n_ptr++;
		}
		if (!*n_ptr)
		{
			return (start);
		}
		h_ptr = start + 1;
	}

	return (NULL);
}

