#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search through
 * @size: the number of elements
 * @cmp: a pointer
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

