#include "main.h"
/**
 * print_last_digit - prints the last number
 *
 * @num: integer variable
 *
 * Return: last_digit
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = q % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
