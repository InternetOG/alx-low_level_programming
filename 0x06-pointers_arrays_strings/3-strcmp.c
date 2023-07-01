#include "main.h"

/**
 *_strcmp - compares strings
 *@s1: char param
 *@s2: char param
 *Return: comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
