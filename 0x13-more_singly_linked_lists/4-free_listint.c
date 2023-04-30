#include "lists.h"
/**
  *free_listint - frees a list using a placeholder for each next
  *@head: pointer to list
  */
void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
