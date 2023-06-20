#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: Integer type
 *
 * Return: return 1 if +ve, -1 iff -ve, else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
