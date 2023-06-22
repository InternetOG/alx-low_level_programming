#include "main.h"

/**
 * _isupper - This checks for Uppercase char
 *
 * @c: This is a char
 *
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
