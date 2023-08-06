#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* binary_to_uint - function to convert binary to decimal
* @b: argument in the function
* Return: returns value
*/

void print_binary(unsigned long int n)
{
	char *binary, *revBin;
	int wNum;
    	int rmd;
	int i;
	int ph;

    	int index = 0;
	binary = NULL;
	revBin = NULL;
	binary = malloc(sizeof(char));

	if (binary == NULL)
	{
		return;
	}

	if (n == 0)
	{
		printf("0");
	}
    while (n)
    {
        wNum = n / 2;
        rmd = n % 2;
        binary[index] = rmd;
        n = wNum;
        index++;
    }
    binary[index] = '\0';

    revBin = malloc(sizeof(char));

    if (revBin == NULL)
    {
        return;
    }

    ph = index - 1;
    for (i = 0; i < index; i++)
    {
        revBin[i] = binary[ph];
        ph--;
    }

     for (i = 0; i < index; i++)
    {
        printf("%i", revBin[i]);
    }
     free(binary);
     free(revBin);
}
