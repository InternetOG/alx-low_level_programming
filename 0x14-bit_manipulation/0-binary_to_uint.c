#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* binary_to_uint - function to convert binary to decimal
* @b: argument in the function
* Return: returns value
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, k, sum, var;

	if (b == NULL)
	{
		return (0);
	}
	sum = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
	}
	for (k = 0; k < i; k++)
	{
		if (b[k] > 49)
		{
			return (0);
		}
		var = b[k] - '0';
		sum += var << ((i - 1) - k);
	}

	return (sum);
}
