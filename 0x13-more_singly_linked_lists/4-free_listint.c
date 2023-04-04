#include <stdlib.h>
#include "lists.h"

/**
* free_listint - a function that frees a list
* @head: a pointer point to the head of a list
* returns nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	while (head != NULL)
	{
		temp_ptr = head;
		head = head->next;
		free(temp_ptr);
	}
}
