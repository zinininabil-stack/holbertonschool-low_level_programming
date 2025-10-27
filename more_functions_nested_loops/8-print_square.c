#include "main.h"
/**
 * print_square - Prints a square using the character '#'
 * @size: The size of the square
 *
 * Description: This function prints a square made of the
 * '#' character. The size parameter determines both the
 * width and height of the square. A newline is printed at
 * the end of each row. If size is 0 or less, only a newline
 * is printed.
 *
 * Return: void
 */
void print_square(int size)
{
int x = 0;	  /** Rows */
int y = 0; /** Columns */

		if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
				for (y = 0; y < size; y++)
				{
					_putchar('#');
				}
				_putchar('\n');
		}
	}
}
