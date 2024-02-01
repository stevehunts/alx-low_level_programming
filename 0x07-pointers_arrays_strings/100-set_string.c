#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the address of the string pointer to modify
 * @to: the new string to point to
 */
void set_string(char **s, char *to)
{
	*s = to;
}

