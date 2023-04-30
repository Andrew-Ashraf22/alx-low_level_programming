#include "lists.h"
/**
  *pop_listint - removes head and return data in it
  *@head: head address
  *Return: data of head
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if ((*head) == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
