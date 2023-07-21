#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that prints a name
 * @array: a pointer to a char
 * @size: a pointer function
 * @action: a pointer function
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array != NULL)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}

	}
}
