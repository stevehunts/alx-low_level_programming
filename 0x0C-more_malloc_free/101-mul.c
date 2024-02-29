#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a positive number
 * @str: string to check
 *
 * Return: 1 if string is a positive number, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	/* Check for empty string */
	if (str[0] == '\0')
		return (0);

	/* Check each character to ensure it's a digit */
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	long num1, num2, result;

	/* Check for correct number of arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* Validate both arguments to ensure they are positive numbers */
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	/* Convert strings to numbers and multiply */
	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	result = num1 * num2;

	/* Print result */
	printf("%ld\n", result);

	return (0);
}

