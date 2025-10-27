#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 *
 * Description: Prints a diagonal line of length n using
 * the _putchar function. Each '\' character is preceded
 * by spaces to create the diagonal effect. Ends with a
 * newline. If n is 0 or less, only prints a newline.
 *
 * Return: void
 */
void print_diagonal(int n)
{

	int i = 0; /** Rows */
	int j = 0; /** Columns */

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++) /** Backslash */
			{
				_putchar(' ');
			}

		_putchar('\\');
			_putchar('\n');
		}
	}
}
