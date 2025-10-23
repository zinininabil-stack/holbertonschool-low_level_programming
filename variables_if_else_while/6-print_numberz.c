#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nombre;

for (nombre = '0'; nombre <= '9'; nombre++)
{
	putchar(nombre);
}
putchar('\n');

return (0);
}
