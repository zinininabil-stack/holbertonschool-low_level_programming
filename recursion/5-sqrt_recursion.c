
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * _square_root -calcul square of a number
 * @n: number to compute the square root of
 * Return: natural square root, or -1 if n < 0 or no natural square root exists
 */


int _sqrt_recursion(int n)
{
n = _square_root(0, n);
	return (n);
}

/**
 * _square_root - recursively finds the natural square root of a number
 * @s: current candidate root
 * @t: number to compute the square root of
0 *
 * Return: natural square root of t, or -1 if no natural square root exists
 */
int _square_root(int s, int t)
{

if (t < 0 || s == t)
	return (-1);

if (s * s == t)

return (s);

if (t == 1)

return (1);

else
return (_square_root(s + 1, t));

}
