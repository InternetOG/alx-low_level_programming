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
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
