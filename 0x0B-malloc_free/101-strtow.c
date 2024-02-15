#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 * Return: The number of words
 */
int count_words(char *str)
{
	int state = 0;
	unsigned int wc = 0; /* word count */

	while (*str)
	{
		if (*str == ' ')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			++wc;
		}
		++str;
	}

	return (wc);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, wc = 0, wl = 0; /* wl = word length */
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = count_words(str);
	if (wc == 0)
		return (NULL);

	words = (char **)malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (*str)
	{
		while (*str == ' ' && *str)
			str++;
		wl = 0;
		while (str[wl] != ' ' && str[wl])
			wl++;
		if (wl == 0)
			break;
		words[k] = (char *)malloc((wl + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (i = 0; i < k; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < wl; j++)
			words[k][j] = str[j];
		words[k][j] = '\0';
		str += wl;
		k++;
	}
	words[k] = NULL; /* Last element is NULL for the end of the array */

	return (words);
}

