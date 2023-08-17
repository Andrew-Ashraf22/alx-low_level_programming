#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: the list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
	{
		return;
	}

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
