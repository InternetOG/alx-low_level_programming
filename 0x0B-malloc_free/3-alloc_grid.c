#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - create array using malloc
 * @width: total length of elements
 * @height: character assigned to each element
 * Return: pointer s
 */
int **alloc_grid(int width, int height)
{
	int i, j, **s;

	if ((width <= 0 || height <= 0))
	{
		return (NULL);
	}
	s = (int **)malloc((width * height) * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(s[i]);
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
	free(s);
}
