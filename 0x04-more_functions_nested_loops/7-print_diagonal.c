#include "main.h"

/**
 * print_line - display backward slash
 *
 * @n: type int
 *
 * Return: always 0
 */

void print_line(int n){

	for (int i = 0; i < n; i++)
	{
                _putchar(' ');

                if (i == n)
		{
			_putchar('\\');
			break;
		}
        }
        _putchar('\n');
}
