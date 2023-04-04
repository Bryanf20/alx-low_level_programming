#include <stdio.h>
#include "lists.h"

/**
* print_listint - a function that prints all the elements of a list
* @h: holds the head to the linked list
* Return: the number of nodes
**/

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		node += 1;
		h = h->next;
	}

	return (node);
}
