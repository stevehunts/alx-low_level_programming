#include "main.h"

/**
 * is_separator - checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (separators[i])
	{
		if (c == separators[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			capitalize = 0;
		}

		if (is_separator(str[i]))
		{
			capitalize = 1;
		}

		i++;
	}

	return (str);
}

