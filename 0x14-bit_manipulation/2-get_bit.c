#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* binary_to_uint - function to convert binary to decimal
* @b: argument in the function
* Return: returns value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	char *binary;
	int wNum, rmd;

    	int ind = 0;
	binary = malloc(sizeof(char));

	if (binary == NULL)
	{
		return (-1);
	}

	if (n == 0)
	{
		printf("0");
	}
    while (n)
    {
        wNum = n / 2;
        rmd = n % 2;
        binary[ind] = rmd;
        n = wNum;
        ind++;
    }
    binary[ind] = '\0';

    return (binary[index]);
}
