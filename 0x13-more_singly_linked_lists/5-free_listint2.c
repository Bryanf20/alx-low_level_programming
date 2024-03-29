#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - a function that frees a list
* @head: a pointer to a pointer that point to a list
* returns nothin
*/

void free_listint2(listint_t **head)
{
	listint_t *temp_ptr;
	listint_t *ptr;

	if (head != NULL)
	{
		ptr = *head;
		while ((temp_ptr = ptr) != NULL)
		{
			ptr = ptr->next;
			free(temp_ptr);
		}
		*head = NULL;
	}
}
