#include "main.h"

/**
 * flip_bits - counts the number of bits that would need to be flipped to
 * transform the number n into m.
 * @n: first number
 * @m: second number
 *
 * Return: The number of bits that need to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m; /* XOR to find differing bits */
	unsigned int countbit = 0;

	/* Iterate through each bit, counting differences */
	while (exclusive)
	{
		countbit += exclusive & 1; /* Increment if LSB is 1 */
		exclusive >>= 1; /* Move to the next bit */
	}

	return (countbit);
}

