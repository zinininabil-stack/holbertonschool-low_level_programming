#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: integer whose factorial is to be computed
 *
 * Return: factorial of n
 *         -1 if n is lower than 0 (error)
 */
int factorial(int n)
{

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
