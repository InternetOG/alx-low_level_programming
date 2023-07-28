#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - linked list function to print elements and size
 * @h: a pointer to a struct typedef to list_t
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		const list_t *new = NULL;

		new = h;

			while (new != NULL)
			{
				new = new->next;
				count++;
			}
	}
	return (count);
}

