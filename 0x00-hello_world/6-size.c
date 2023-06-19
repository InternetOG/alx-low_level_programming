#include <stdio.h>
/**
 * main -printf displays the size in memory
 *
 * Return: returns nothing
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu\n byte(s)", sizeof(a));
	printf("size of a int: %lu\n byte(s)", sizeof(b));
	printf("size of a long int: %lu\n byte(s)", sizeof(c));
	printf("size of a long long int: %lu\n byte(s)", sizeof(d));
	printf("size of a float: %lu\n byte(s)", sizeof(e));
	return (0);
}
