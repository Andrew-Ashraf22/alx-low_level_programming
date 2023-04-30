#include "lists.h"
/**
  *free_listint2 - frees a list using a placeholder
  *@head: potiner to list
  */
void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (!head)
		return;

	while (*head)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
	}
}
