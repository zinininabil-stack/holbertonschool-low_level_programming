#include "main.h"

/**
 * is_prime_number - returns 1 if a number is prime, 0 otherwise
 * root_is_prime_number - prime number function
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
n = root_is_prime_number(1, n);
	return (n);
}

int root_is_prime_number(int n, int x)
{


if (n % x == 0)
return (0);

if (n % x != 0)
return (1);

if (n < 2)
return (0);

else
return (root_is_prime_number(n, x - 5));

}
