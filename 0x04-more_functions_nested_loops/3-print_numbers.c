#include "main.h"

/**
 * print_numbers - print from 0 - 9
 *
 * @void: no arguement
 *
 * Return: always 0
 */

voaoid print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
