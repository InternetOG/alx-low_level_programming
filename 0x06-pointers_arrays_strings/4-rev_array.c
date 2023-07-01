#include "main.h"

/**
 *reverse_array - reverses array
 *@a: int param
 *@n: int param
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
}
