#include "main.h"

/**
 * *_strcpy - this copies a string to another
 *
 * @src: The source variable
 * @dest: the destination variable
 *
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
