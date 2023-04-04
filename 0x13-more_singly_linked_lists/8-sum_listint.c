#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - a function that returns the sum of all the data
*of a list
* @head: a pointer that point to the head of list
* Return: sum of all the data or zero if list is empty
**/

int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
  {
		return (0);
  }
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
