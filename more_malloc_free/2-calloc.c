#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array and initialize all bytes to zero
 * @nmemb: number of elements to allocate
 * @size: size in bytes of each element
 *
 * Return: pointer to allocated zero-initialized memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *caloc;
	unsigned int i = 0;
	unsigned int total_size;
	char *ca;


	if (nmemb == 0 || size == 0)
		return (NULL);

	caloc = malloc(nmemb * size);
	ca = caloc;

	total_size = nmemb * size;

	if (caloc == NULL)
		return (NULL);

	for (i = 0 ; i < total_size ; i++)
	{
		ca[i] = 0;
	}
	return (caloc);
}
