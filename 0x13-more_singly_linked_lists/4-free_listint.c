#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - linked list function to print elements and size
 * @head: a pointer to a struct typedef to list_t
 * Return: count
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *newNode;
	temp = head;
	while (temp != NULL)
	{
		newNode = temp->next;
		free(temp);
		temp = newNode;
	}
	free(head);
}
