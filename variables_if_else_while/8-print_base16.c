#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char hexa;

	for (hexa = 48; hexa <= 57; hexa++)
{
	putchar(hexa);
}
	hexa = 64;

	for (hexa = 97; hexa <= 102; hexa++)
{
	putchar(hexa);
}
putchar('\n');
return (0);
}
