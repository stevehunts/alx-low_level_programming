#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*
	 * Commented out the loop to avoid an infinite loop.
	 * The putchar(i); statement inside the loop was missing an increment of 'i'.
	 */
	/* Comment here */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

