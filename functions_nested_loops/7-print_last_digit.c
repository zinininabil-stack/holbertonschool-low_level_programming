#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * The number whose last digit will be printed.
 *
 * Description: This function computes the last digit of the integer n,
 *              prints it to stdout using _putchar, and returns its value.
 *
 * Return: The value of the last digit of n.
 */
int print_last_digit(int n)
{
	int last_digit = 0;

	if (n < 0)
	{
		last_digit = n % 10 * -1;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
