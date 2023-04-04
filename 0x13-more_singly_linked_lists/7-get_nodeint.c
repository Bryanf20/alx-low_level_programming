#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - a function that returns the nth node of a
*linked list
* @head: a pointer that point to a list
* @index: holds the index to return
* Return: the nth node of a listint_t or NULL if the node
*does not exist
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i += 1)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
