#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array ofof size and assign char c
 * @size: the size of the array to be created.
 * @c: the char to initialize the array with.
 *
 * Return: a pointer to the array, or NULL if it fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
