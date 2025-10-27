#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Description: Uses a loop to print digits 0 through 9,
 * followed by a newline. Only uses _putchar twice.
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;
for (c = '0'; c <= '9'; c++)
_putchar(c);

_putchar('\n');
return;
}
