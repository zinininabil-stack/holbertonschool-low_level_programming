#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int left;
	int right;
	char temp;

	/* Find length of the string */
	while (s[length] != '\0')
		length++;

	left = 0;
	right = length - 1;

	/* Swap characters from both ends */
	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}
