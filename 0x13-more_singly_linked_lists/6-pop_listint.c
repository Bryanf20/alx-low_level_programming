#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a list
* @head: a pointer to a pointer that point to a list
* Return: the head node's data(n)
**/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	node = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(node);
	return (n);
}
