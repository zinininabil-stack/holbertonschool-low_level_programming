#include "main.h"
/**
* print_alphabet - Prints the lowercase alphabet followed by a new line
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)

	{
		char c;

	for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		_putchar('\n');
	}

}
