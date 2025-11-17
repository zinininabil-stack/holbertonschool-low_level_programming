<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings, taking at most n bytes from s2
 * @s1: first string (may be NULL, treated as an empty string)
 * @s2: second string (may be NULL, treated as an empty string)
 * @n: maximum number of bytes to take from s2
 *
 * Return: pointer to a newly allocated string containing s1 followed by
 *         the first n bytes of s2 (or NULL on failure)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i, j;
char *concat;
=======
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Description: This function allocates memory of size @b using malloc.
 * If malloc fails, the function causes normal process termination
 * with a status value of 98.
 *
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;
>>>>>>> ab7b7ee (Add string_nconcat function for concatenating two strings)

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

<<<<<<< HEAD
	if (n < len2)
		len2 = n;
	concat = malloc(len1 + len2 + 1);

=======
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
>>>>>>> ab7b7ee (Add string_nconcat function for concatenating two strings)
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
<<<<<<< HEAD
	{
	concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
	concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
=======
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);

}
>>>>>>> ab7b7ee (Add string_nconcat function for concatenating two strings)
