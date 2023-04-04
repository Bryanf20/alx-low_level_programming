#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - a function that inserts a new
*node at a given position
* @head: a pointer to a pointer to a struct
* @idx: is the index of the list where the new node
*should be added. Index starts at 0
* @n: the data for the new node
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next, *previous, *new;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	next = *head;
	previous = NULL;
	for (i = 0; i < idx; i += 1)
	{
		if (next == NULL)
		{
			return (NULL);
		}
		previous = next;
		next = next->next;
	}

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = next;
	if (idx == 0)
	{
		*head = new;
	}
	else
	{
		previous->next = new;
	}

	return (new);
}
