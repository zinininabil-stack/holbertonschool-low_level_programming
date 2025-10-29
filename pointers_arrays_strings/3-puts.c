#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 *
 * Description: This function prints each character of a string
 * one by one using the _putchar function. After printing the
 * entire string, it prints a newline character.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')

	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');


}
