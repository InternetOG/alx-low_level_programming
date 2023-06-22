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

	for (i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; i++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
