#include "main.h"

/**
 * _isupper - This checks for Uppercase char
 *
 * @c: This is a char
 *
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n){
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
