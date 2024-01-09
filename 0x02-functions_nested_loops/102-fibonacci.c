#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers separated by commas.
 * Return: Always 0.
 */
int main(void)
{
int n = 50;
long int first = 1, second = 2, next;
int i;

printf("%ld", first);

for (i = 1; i < n; i++)
{
printf(", %ld", second);
next = first + second;
first = second;
second = next;
}

printf("\n");

return (0);
}

