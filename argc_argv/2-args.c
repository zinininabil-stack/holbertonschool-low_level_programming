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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
