#include "lists.h"

/**
 * print_dlistint - print the data in a double linked list
 * @h: head node or start node
 * Return: returns the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			n += 1;
			printf("%i\n", h->n);
			h = h->next;
		}
		return (n);
	}
	return (n);
}
