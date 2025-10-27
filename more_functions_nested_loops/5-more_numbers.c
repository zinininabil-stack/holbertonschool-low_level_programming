#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 *
 * Description: Uses nested loops to print numbers 0 to 14
 * ten times, each followed by a newline. Only uses _putchar
 * three times.
 *
 * Return: void
 */

void more_numbers(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
			_putchar('1');
			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
