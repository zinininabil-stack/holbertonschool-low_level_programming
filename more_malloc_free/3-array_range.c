#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers containing values from min to max
 * @min: starting integer value (inclusive)
 * @max: ending integer value (inclusive)
 *
 * Return: pointer to newly allocated array of integers from min to max,
 *         or NULL if min > max or if memory allocation fails
 */

int *array_range(int min, int max)
{
int i, *arr;

if (min > max)
	return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
	return (NULL);

for (i = min ; i <= max ; i++)
	arr[(i - min)] = i;

return (arr);
}
