#include "main.h"

/**
 * puts_half - divides the length of char and print other half
 *
 * @str: pointer variable
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
	}
	for (j = i / 2; j < i; j++)
	{
		if (i % 2 != 0)
		{
			_putchar(str[j]);
		}
		_putchar(str[j]);
	}
	_putchar('\n');
}
