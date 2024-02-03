#include "main.h"

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: (1) if the string is a palindrome, (0) otherwise
 */
int is_palindrome(char *s)
{
	int length = 0;

	/* Determine the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* An empty string is considered a palindrome */
	if (length == 0)
	{
		return (1);
	}

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - recursively checks if a string is a palindrome
 * @s: the string to check
 * @start: the starting index of the string
 * @end: the ending index of the string
 *
 * Return: (1) if the substring is a palindrome, (0) otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
}

