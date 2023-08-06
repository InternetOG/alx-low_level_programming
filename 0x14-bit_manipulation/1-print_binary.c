#include "main.h"
/**
* print_binary - function to convert binary to decimal
* @n: argument in the function
* Return: returns value
*/

void print_binary(unsigned long int n)
{
	int i;


		for (i = 10; i >= 0; i--)
		{
			if (n & (1 << i))
					printf("1");
			else
				printf("0");
		}

}

