#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - print the contents of a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: Prints the name, age and owner of the given struct dog.
 *              If d is NULL the function does nothing. If name or owner
 *              is NULL the string "(nil)" is printed for that field.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
	printf("Name: %s\n", d->name);
	else
	printf("Name: (nil)\n");
	if (d->age)
	printf("Age: %f\n", d->age);
	else
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
	printf("Owner: %s\n", d->owner);
	else
	printf("Owner: (nil)\n");
}
