#include "lists.h"
/**
  *add_nodeint_end - add a nodes at the end
  *@head: head of a list
  *@n: element of new
  *Return: new node address;
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	new->next = NULL;
	return (new);
}
