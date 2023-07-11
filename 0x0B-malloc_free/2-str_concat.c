#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concate two string together using malloc
 * @s1: string one
 * @s2: String two
 * Return: pointer s
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i;
	unsigned int j;
	int k;
	int l;
	int m;
	int len;

	i = 0;
	j = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	len = i + j;
	s = malloc(len * sizeof(char));
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	m = 0;
	for (l = k; l < len; l++)
	{
		s[l] = s2[m];
		if (m < j)
		{
			m++;
		}
	}
	return (s);
}
