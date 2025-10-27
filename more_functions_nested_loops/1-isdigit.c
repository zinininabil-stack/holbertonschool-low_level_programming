#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Description: This function checks if the character passed
 * to it (by its ASCII value) is a digit.
 * It returns 1 if the character is digit, and 0 otherwise.
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
