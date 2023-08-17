#include "lists.h"
/**
 * add_dnodeint - adds node at begging of a list
 * @head: the list
 * @n: value of new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);

}
