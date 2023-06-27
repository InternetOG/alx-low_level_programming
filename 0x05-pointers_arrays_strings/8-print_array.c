#include <stdio.h>
#include "main.h"

/**
 * print_array - prints all elements of an array
 *
 * @a: This is n integer type
 * @n: Integer type
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
	}
	for (n = 0; n <= i - 1; n++)
	{
		printf("%i, ", a[n]);
	}
}
