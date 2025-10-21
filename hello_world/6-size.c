#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Determine and Print the size of int */
printf("Size of int: %u bytes\n", sizeof(int));

    /* Determine and Print the size of float */
printf("Size of float: %u bytes\n", sizeof(float));

    /* Determine and Print the size of double */
printf("Size of double: %u bytes\n", sizeof(double));

    /* Determine and Print the size of char */
printf("Size of char: %u bytes\n", sizeof(char));

return (0);
}
