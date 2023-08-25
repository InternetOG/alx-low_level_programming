#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - linked list function to print elements and size
 * @head: a pointer to a struct typedef to list_t
 * Return: count
 */

int pop_listint2(listint_t **head)
{
	if ((*head) != NULL)
	{
		listint_t *newNode, *temp;
		(*head) = temp;
		if (temp->next != NULL)
		{
			printf("- %i\n", temp->n);
			temp = temp->next;
			(*head) = temp;
		}
	}
	return (temp->n);
}
