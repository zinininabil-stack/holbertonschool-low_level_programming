#include "main.h"
#include <stdlib.h>

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments (not used)
 * @argv: array of arguments (argv[0] is the program name)
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int number1, number2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	mul = number1 * number2;

	printf("%d\n", mul);

	return (0);
}
