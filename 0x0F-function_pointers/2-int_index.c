#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that prints a name
 * @array: a pointer to a char
 * @size: a pointer function
 * @cmp: a pointer function
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL)
	{
		for (j = 0; j < size; j++)
		{
			if ((*cmp)(array[j]))
			{
				return (j);
			}
			else if ((j == size - 1) && !((*cmp)(array[j])))
			{
				return (-1);
			}
		}

	}
	return (0);
}
