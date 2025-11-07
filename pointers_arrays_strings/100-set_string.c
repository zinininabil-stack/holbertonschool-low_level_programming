#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the string (pointer to a char pointer)
 * @to: the string to set @s to
 *
 * Description: This function updates the value of a pointer
 * to point to a different string.
 */
void set_string(char **s, char *to)
{
*s = to;
}
