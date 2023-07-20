#include <stdio.h>
#include <stdarg.h>
/**
 *printf_all - print using characters
 *@format: parameter
 *
 */
void print_all(const char * format, ...)
{
	va_list ap;
	va_start(ap, format);
	const char* fmt_ptr = format;

	while (*fmt_ptr != '\0')
	{
		switch (*fmt_ptr)
		{
			case 'c':
				{
					char c = va_arg(ap, int);
					printf("%c, ", c);
					break;
				}
			case 'i':
				{
					int i = va_arg(ap, int);
					printf("%i, ", i);
					break;
				}
			case 'f':
				{
					double d = va_arg(ap, double);
					printf("%f, ", d);
					break;
				}
			case 's':
				{
					char* s = va_arg(ap, char*);
					if (s != NULL)
					{
						printf("%s, ", s);
					}
					else
					{
						printf("(nil), ");
					}
					break;
				}
		}
		fmt_ptr++;
    }
    va_end(ap);
    printf("\n");
}
