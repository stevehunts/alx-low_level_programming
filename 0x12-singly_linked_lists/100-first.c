#include <stdio.h>

/**
 * premain - A function that executes before main.
 * Use the constructor attribute to run this before main.
 */
void __attribute__((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

