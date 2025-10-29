#include "main.h"
#include <stdio.h>
/**
* _strlen - Returns the length of a string
* @s: Pointer to the string whose length is to be calculated
*
* Description: This function takes a pointer to a string as a parameter
* and returns the number of characters in the string, excluding the
* terminating null byte ('\0').
*
* Return: The length of the string.
*/
int _strlen(char *salutcopain)

{
	int i = 0;

	while (salutcopain[i] != '\0')

	{
		i++;
	}
	return (i);
}
