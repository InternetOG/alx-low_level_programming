#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - function that prints strings
 *@separator: parameter
 *@n: int parameter
 *Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list ap;
		unsigned int i;
		const char *current_str;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			current_str = va_arg(ap, char*);
			if (current_str != NULL)
			{
				printf("%s", current_str);
			}
			else
			{
				printf("(nil)");
			}

			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}

		va_end(ap);
		printf("\n");
	}
}
