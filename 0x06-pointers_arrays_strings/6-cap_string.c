#include "main.h"
#include <ctype.h>

/**
 *cap_string - Capitalizes all words of a string
 *@str: char param
 *Return: 0
 */

char *cap_string(char *str)
{
	int i;
	int cap_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (cap_next && isalpha(str[i]))
	{
	str[i] = toupper(str[i]);
	}

	cap_next = 0;
	switch (str[i])
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
	cap_next = 1;
	break;
	default:
	break;
	}
	}

	return (str);
}
