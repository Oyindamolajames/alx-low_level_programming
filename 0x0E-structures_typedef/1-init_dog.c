#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: a pointer to the struct dog that was initialized
 * @name: string to set as name of dog
 * @age: float set as age of dog
 * @owner: string set as owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
