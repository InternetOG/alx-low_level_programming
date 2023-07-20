#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: a pointer to a char
 * @f: a pointer function
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
