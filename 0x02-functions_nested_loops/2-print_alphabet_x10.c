#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10 times
 *
 * Return: return nothing
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
