#include "main.h"

/**
 * print_line - prints underscore
 *
 * @n: integer type
 *
 * Return: always 0
 *
 */

void print_line(int n)
{
	for (int i = 0; i < n; i++){
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
