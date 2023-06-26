#include "main.h"

/**
 * _strlen - This checks for Uppercase char
 *
 * @s: a pointer variable
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}
	return (i);
}
