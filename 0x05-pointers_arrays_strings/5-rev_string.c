#include "main.h"

/**
 * rev_string - display string of char in reverse by swapping
 *
 * @s: This is pointer variable
 *
 * Return: always 0
 */

void rev_string(char *s)
{
	int i;
	int j;
	char placeHolder;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}

	for (j = 0; j < i / 2; j++)
	{
		placeHolder = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = placeHolder;
	}
}
