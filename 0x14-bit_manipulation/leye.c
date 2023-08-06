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
	int cnt = 0;
	int sumChar = 0;
	unsigned int index;
	if (b != NULL)
	{

		while (b[cnt] != '\0')
		{
			cnt++;
		}

		for (index = 0; b[index] != '\0'; index++)
		{
			if (b[index] == 48 || b[index] == 49)
			{
				sumChar += putchar(b[index] - '0') << (cnt - (index + 1));
				printf("%i\n", cnt);
				cnt++;
			}
			else
			{
				return (0);
			}
		}

	}
	return (sumChar);
}
