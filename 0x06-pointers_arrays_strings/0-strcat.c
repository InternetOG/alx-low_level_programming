#include "main.h"

/**
 * _strcat - This function copies a string into another
 *
 * @dest: Destination string
 * @src: source string
 *
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;
	int l;
	int totalLength;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}

	totalLength = i + j;

	for (k = 0; k == 0; k++)
	{
		for (l = i; l < totalLength; l++)
		{
			if (k == totalLength)
			{
				break;
			}
			dest[l] += src[k];
			k++;
		}
		break;
	}
	return (dest);
}
