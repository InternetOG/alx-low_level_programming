#inlcude "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning
 * @head: the head node or start node
 * @n: data to insert into one or more nodes
 * Return: returns a struct pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = NULL;
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		perror("Not enough memory");
		return (1);
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (*head);
}
