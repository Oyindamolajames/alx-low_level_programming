#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - A function that creates a new dog
 * @name: Apointer to the name of the dog
 * @age: a float of the age of the dog
 * @owner: a pointer to the owner of the dog
 *
 * Return: Return NULL is the functions fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char  *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for a new dog*/
	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
	return (NULL);
	}

	/* Allocate memory and copy the name */
	name_copy = malloc(strlen(name) + 1);

	if (name_copy == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(name_copy, name);

	/* Allocate memory and copy the owner */
	owner_copy = malloc(strlen(owner) + 1);

	if (owner_copy == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	/* Initialize the new dog */
	newDog->name = name_copy;
	newDog->age = age;
	newDog->owner = owner_copy;

	return (newDog);
}

