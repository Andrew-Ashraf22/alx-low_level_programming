#include "lists.h"
/**
  *add_nodeint - adds a node at the start
  *@head: the head
  *@n: element of new head
  *Return: pointer to new head
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
