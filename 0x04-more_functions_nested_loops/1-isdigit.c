#include "main.h"

/**
 * _isdigit - This checks for digits
 *
 * @c: This is a char
 *
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		_putchar((c % 10) + '0');
		_putchar(':');
		_putchar(' ');
		_putchar('1');
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('0')
	}
}
