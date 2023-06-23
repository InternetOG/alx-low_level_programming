#include <stdio.h>
#include <math.h>

/**
 * main - main function of the program
 * Description: Find and print the largest prime factor of the num
 * Return: 0
 */

int main(void)
{
	int b;

	long num = 612852475143;

	for (b = (int) sqrt(num); b > 2; b++)
	{
		if (num % b == 0)
		{
			printf("%d\n", b);
			break;
		}

	}

	return (0);

}
