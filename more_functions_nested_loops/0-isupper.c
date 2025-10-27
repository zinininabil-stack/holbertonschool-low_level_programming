#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Description: This function checks if the character passed
 * to it (by its ASCII value) is a uppercase letter.
 * It returns 1 if the character is uppercase, and 0 otherwise.
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
