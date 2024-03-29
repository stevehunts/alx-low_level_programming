#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using the provided function
 * @name: the name to print
 * @f: pointer to the function that will print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

