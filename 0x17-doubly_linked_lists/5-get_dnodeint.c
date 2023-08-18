#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node at index
 * @head: the list
 * @index: index of needed node
 * Return: the node at index
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = index;

	if (head == NULL)
		return (NULL);
	if ((int)index < 0)
		return (NULL);

	if (i == 0)
	{
		return (head);
	}

	for (; i > 0; i--)
	{
		head = head->next;
	}
	return (head);
}
