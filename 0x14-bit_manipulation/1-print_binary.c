#include <stdio.h>
#include <unistd.h> /* For write function prototype */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1)); /* Ensuring use of tabs for indentation */
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /* Ensuring use of tabs for indentation */
	}

	_putchar((n & 1) + '0'); /* Printing the least significant bit */
}

/**
 * main - Entry point
 * Description: Test the print_binary function with various numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}
