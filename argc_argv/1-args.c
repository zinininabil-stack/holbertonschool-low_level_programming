#include "main.h"

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
	(void)argv;
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
