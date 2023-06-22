#include "main.h"

/**
 * more_numbers - 10X14 matrix
 *
 * @void: no parameter
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (j > 9 && j < 15)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
