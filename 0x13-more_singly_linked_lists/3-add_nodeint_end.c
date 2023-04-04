#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of list
* @head: a pointer to a pointer to a struct
* @n: holds the data for the node
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
  {
		return (NULL);
  }

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
