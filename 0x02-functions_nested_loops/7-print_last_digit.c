#include "main.h"

/**
 *print_last_digit - prints the last digit
 *@q: type integer
 *Return: The value of the last digit
 */


int print_last_digit(int q)
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
