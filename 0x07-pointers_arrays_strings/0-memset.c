#include "main.h"

/**
 * _memset - This checks for Uppercase char
 *
 * @s: This is a char
 * @b: char b
 * @n: num
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
