#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* binary_to_unit - convert to unit
* @b:  a pointer to a char
* Return: returns cnt
*
*/

unsigned int binary_to_uint(const char *b)
{
	int index, cnt = 0, sumChar = 0;

	if (b != NULL)
	{
		while (b[cnt] != '\0')
		{
			cnt++;
		}

		for (index = 0; index < cnt; index++)
		{
			if (b[index] == 48 || b[index] == 49)
			{
				sumChar += (_putchar(b[index] - '0') << (cnt - (index + 1)));
			}
			else
			{
				return (0);
			}
		}
	}
	return (sumChar);
}
