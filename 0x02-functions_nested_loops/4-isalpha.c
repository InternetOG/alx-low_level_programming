#include "main.h"

/**
 * _isalpha - checks for characters
 *
 * @c: Alphabetical character
 *
 * Return: retuns 1 for character
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
