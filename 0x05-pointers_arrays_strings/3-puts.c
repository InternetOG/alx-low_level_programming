#include "main.h"

/**
 * _isupper - This checks for Uppercase char
 *
 * @c: This is a char
 *
 * Return: always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
	}
	_putchar('\n');

}
