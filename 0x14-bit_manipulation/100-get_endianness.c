#include "main.h"

/**
 * get_endianness - this function looks if a machine is little or big endian.
 * Return: the function returns 0 for big, 1 for little.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
