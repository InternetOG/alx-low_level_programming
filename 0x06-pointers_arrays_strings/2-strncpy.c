#include "main.h"

/**
 * _strncpy - Copies string from src to dest
 *
 * @dest: destination string
 * @src: Source string
 * @n: index number to copy
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	int l;
	int k = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}

	for (l = 0; l < i - 1; l++)
	{
		if (n == l)
		{
			break;
		}
		dest[l] = src[k];
		k++;
	}
	return (dest);
}
