#include <stdarg.h>
/**
 *print_strings: prints strings
 *@separator: seperate the strings
 *@n: numbers of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list ap;
		va_start(ap, n);
		int i;
		const char *current_str;

		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(ap, char*));
			if (i != n-1)
			{
				printf("%s", separator);
			}
		}
		va_end(ap);
	}
}
