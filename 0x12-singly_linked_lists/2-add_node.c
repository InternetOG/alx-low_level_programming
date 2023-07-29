#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node -  a pointer to struct node
 * @head: double pointer to a struct
 * @str: a pointer to a string
 * Return: return a pointer to a struct
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *firstNode = NULL;

	firstNode = malloc(sizeof(list_t));

	if (firstNode != NULL)
	{
		firstNode->str = strdup(str);
		firstNode->len = strlen(str);
		firstNode->next = (*head);
		(*head) = firstNode;
		return (firstNode);
	}
	else
	{
		return (NULL);
	}
}
