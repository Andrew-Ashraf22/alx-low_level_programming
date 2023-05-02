#include "lists.h"
/**
  *reverse_listint - reverse a list
  *@head: the list
  *Return: head of new list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	while (*head)
	{
		listint_t *next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return ((*head));
}
