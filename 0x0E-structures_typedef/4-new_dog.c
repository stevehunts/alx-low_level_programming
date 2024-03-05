#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new struct dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;

	dog = malloc(sizeof(dog_t)); /* Allocate memory for the dog structure */
	if (!dog)
		return (NULL);

	if (name)
	{
		new_name = malloc(strlen(name) + 1); /* +1 for the null terminator */
		if (!new_name)
		{
			free(dog); /* Free the allocated dog before returning NULL */
			return (NULL);
		}
		strcpy(new_name, name);
		dog->name = new_name;
	}
	else
		dog->name = NULL;

	dog->age = age;

	if (owner)
	{
		new_owner = malloc(strlen(owner) + 1); /* +1 for the null terminator */
		if (!new_owner)
		{
			free(dog->name); /* Free the allocated name */
			free(dog); /* Free the allocated dog before returning NULL */
			return (NULL);
		}
		strcpy(new_owner, owner);
		dog->owner = new_owner;
	}
	else
		dog->owner = NULL;

	return (dog);
}

