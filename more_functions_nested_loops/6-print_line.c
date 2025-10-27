#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the character '_' should be printed
 *
 * Description: Prints a straight line of length n using
 * the _putchar function. Ends with a newline. If n is 0
 * or less, only prints a newline.
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
	n--;
	}

	_putchar('\n');
}
