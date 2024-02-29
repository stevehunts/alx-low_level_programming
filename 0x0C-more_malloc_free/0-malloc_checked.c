#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exits with 98 if it fails
 * @b: the size of memory to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);
}

