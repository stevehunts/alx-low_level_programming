#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * premain - A function that executes before main.
 * Use the constructor attribute to run this before main.
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

