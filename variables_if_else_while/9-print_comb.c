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
	int n = 0;

	for (n = 48; n <= 57; n++)
{
		putchar(n);



		if (n < '9')
		{
			putchar(44);
			putchar(32);
		}

}
		putchar('\n');

		return (0);
}
