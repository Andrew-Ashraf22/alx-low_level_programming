#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: the list
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = idx, j = 0;
	dlistint_t *new, *temp, *temp2;

	temp = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (idx < 0)
		return (NULL);

	temp2 = *h;
	while (temp2)
	{
		temp2 = temp2->next;
		j++;
	}

	if (idx == j)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (i - 1)
	{
		temp = temp->next;
		i--;
	}

	new->next = temp->next;
	new->prev = temp;
	(temp->next)->prev = new;
	temp->next = new;
	return (new);
}
