#include <main.h>

/**
 * main - main function
 *
 * Return: returns 0
 *
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(print_alphabet(i));
	}
	_putchar('\n');
	return (0);
}
