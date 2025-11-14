#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1 = 0, len2 = 0;
	char *cpy1;
	char *cpy2;
	int i = 0, j = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;

	cpy1 = malloc(sizeof(char) * (len1 + 1));
	if (cpy1 == NULL)
	{
		free(d);
		return (NULL);
	}
	while (owner[len2] != '\0')
		len2++;

	cpy2 = malloc(sizeof(char) * (len2 + 1));
	if (cpy2 == NULL)
	{
		free(cpy1);
		free(d);
		return (NULL);
	}
	d->name = cpy1;
	for (i = 0; i < len1; i++)
		cpy1[i] = name[i];
	cpy1[len1] = '\0';

	d->owner = cpy2;
	for (j = 0; j < len2; j++)
		cpy2[j] = owner[j];
	cpy2[len2] = '\0';
	d->age = age;
	return (d);
}
