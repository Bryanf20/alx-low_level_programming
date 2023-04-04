#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes the node at
*index index of a listint_t linked list.
* @head: a pointer to a pointer point to head of list
* @index: the index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous;
	listint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	temp = *head;
	previous = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		previous = temp;
		temp = temp->next;
	}
	if (previous)
	{
		previous->next = temp->next;
	}
	free(temp);

	return (1);
}
