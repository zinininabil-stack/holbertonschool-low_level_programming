#include "main.h"
#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100 with FizzBuzz rules
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n; /** Numbers */
for (n = 1; n <= 100; n++)
{
	if (n % 5 == 0 && n % 3 == 0)
	printf("FizzBuzz");

	else if (n % 5 == 0)
	printf("Buzz");

	else if (n % 3 == 0)
	printf("Fizz");

	else
	printf("%d", n);

	if (n < 100)
	printf(" ");
}
	printf("\n");

	return (0);
}
