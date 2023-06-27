#include "main.h"

/**
 * print_rev - display string of char in reverse
 *
 * @s: This is pointer variable
 *
 * Return: always 0
 */

void rev_string(char *s)
{
	int i;
	int j;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}

	for (j = i - 1; j >= 0; j--)
	{
		*(s + j);
	}
}
