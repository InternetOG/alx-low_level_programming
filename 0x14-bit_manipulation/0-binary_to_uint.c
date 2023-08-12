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
	int res = 0;
	int i = 0;
	int j = 0;
	int count = 0;

	if (b != NULL)
	{
		while (b[i] != '\0')
		{
			count++;
			i++;
		}

		while (b[j] != '\0')
		{
			if (b[j] > 49)
			{
				return (0);
			}
			res += (b[j] - '0') << ((i - j) - 1);
			j++;
		}
	}
	return (res);
}
