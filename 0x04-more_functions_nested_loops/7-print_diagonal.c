#include "main.h"

/**
 * print_line - display backward slash
 *
 * @n: type int
 *
 * Return: always 0
 */

void print_line(int n){
	int i;

	for (i = 0; i < n; i++)
	{
                _putchar('\\');
        }
        _putchar('\n');
}
