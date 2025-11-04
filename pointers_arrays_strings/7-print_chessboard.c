#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: Pointer to an array of 8 characters (representing each row)
 *
 * Description: This function takes a 2D array of characters that represents
 * a chessboard and prints it to the standard output. Each row of the array
 * corresponds to a line of the chessboard.
 */
void print_chessboard(char (*a)[8])
{
int i, j; /** i = columns, j = rows */
for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
		_putchar(a[i][j]);

	_putchar('\n');
	}

}
