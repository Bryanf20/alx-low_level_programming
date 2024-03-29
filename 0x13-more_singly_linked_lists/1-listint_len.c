#include <stdio.h>
#include "lists.h"

/**
* listint_len - a function that returns the number of elements in a linked list
* @h: points to the head of list
* Return: the number of elements in a list
**/

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node += 1;
	}
	return (node);
}
