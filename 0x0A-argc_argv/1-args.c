#include <stdio.h>
#include "main.h"

/**
 * main - prints a string
 * @argc: length of arguments
 * @argv: pointer to an array of strings/arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);
	argv[argc] = 0;
	return (0);
}
