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
	int j;

	for (j = 0; j < n; j++)
	{
		if (j != n - 1)
		{
			printf("%i, ", a[j]);
		}
		else
		{
			printf("%i", a[j]);
		}
	}
	printf("\n");
}
