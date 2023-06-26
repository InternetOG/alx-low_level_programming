#include "main.h"

/**
 * swap_int - swap variables
 *
 * @a: An int type
 * @b: An int type
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
