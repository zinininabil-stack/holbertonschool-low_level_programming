#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: This function prints the alphabet in lowercase,
 * followed by a new line, and repeats this process 10 times.
 *
 * Return: void
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
