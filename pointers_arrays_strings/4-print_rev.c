#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Description: This function calculates the length of the string,
 * then prints each character in reverse order using _putchar,
 * ending with a newline character.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');

}
