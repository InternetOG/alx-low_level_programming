#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - linked list function to print elements and size
 * @head: a pointer to a struct typedef to list_t
 * @n: a const int
 * Return: count
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = NULL;
	temp = malloc(sizeof(listint_t));
	if (temp != NULL)
	{
		temp->n = n;
		temp->next = (*head);
		(*head) = temp;
	}
	return ((*head));
}
