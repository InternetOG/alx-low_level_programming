#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - linked list function to print elements and size
 * @head: a pointer to a struct typedef to list_t
 * @n: a const int
 * Return: count
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *newNode = NULL;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}

	if ((*head) == NULL)
	{
		(*head) = temp = newNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return ((*head));
}
