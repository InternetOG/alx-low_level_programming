#include "main.h"

/**
 * print_square - displays sqaures of an input
 *
 * @size: parameter or arguement
 *
 * Return: always 0
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
