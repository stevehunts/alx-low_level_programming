#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: Prints the name, age, and owner of a dog.
 * prints (nil) instead. If the struct dog pointer is NULL
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	
	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nill)";
	printf("name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

