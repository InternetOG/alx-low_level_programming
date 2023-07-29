#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end -  a pointer to struct node
 * @head: double pointer to a struct
 * @str: a pointer to a string
 * Return: return a pointer to a struct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode = NULL;

	endNode = malloc(sizeof(list_t));

	if (endNode != NULL)
	{
		endNode->str = strdup(str);
		endNode->len = strlen(str);
		endNode->next = (*head)->next;
		(*head)->next = endNode;
		return (endNode);
	}
	else
	{
		return (NULL);
	}
}
