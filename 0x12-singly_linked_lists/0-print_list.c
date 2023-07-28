#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - linked list function to print elements and size
 * @h: a pointer to a struct typedef to list_t
 * Return: count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		const list_t *new = NULL;

		new = h;

			while (new != NULL)
			{
				if (new->str != NULL)
				{
					printf("[%i] %s\n", new->len, new->str);
				}
				else
				{
					printf("[0] (nil)\n");
				}
				new = new->next;
				count++;
			}
	}
	return (count);
}

