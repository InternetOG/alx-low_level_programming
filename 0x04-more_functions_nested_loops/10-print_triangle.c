#include "main.h"
/**
 * print_triangle - printing out value
 * @size: a named integer
 */
void print_triangle(int size)
{

if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = size - 1 ; j > i ; j--)
{

_putchar(' ');

}
for (j = 0; j < (i + 1); j++)
{

_putchar('#');

}
_putchar('\n');
}
}
}
