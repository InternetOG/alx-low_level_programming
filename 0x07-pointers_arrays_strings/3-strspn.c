#include "main.h"

/**
 * _strspn - This checks for Uppercase char
 *
 * @s: This is a char string type
 * @accept: a substring
 *
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ',' || s[i] == ' ')
		{
			break;
		}
	}
	for (j = 0; accept[j] != '\0'; j++)
	{
	}
	for (k = 0; k < i; k++)
	{
		for (l = 0; l < j; l++)
		{
			if (accept[l] == s[k])
			{
				sum += 1;
			}
		}
	}
	return (sum);
}
