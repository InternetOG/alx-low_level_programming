#include "main.h"

/**
 * _memcpy - This checks for Uppercase char
 *
 * @dest: This is a char
 * @src: src
 * @n: numbers
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
