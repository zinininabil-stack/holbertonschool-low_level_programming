#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * init_dog - initialize a struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Initializes the members of a struct dog with provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

