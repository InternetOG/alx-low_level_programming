#include "main.h"

/**
 * main - main function
 *
 * Return: return 0
 */
int main(void)
{
	char putChar[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(putChar[i]);
	}
	_putchar('\n');

	return (0);
}
