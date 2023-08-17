#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node at index
 * @head: the list
 * @index: index of needed node
 * Return: the node at index
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	if (index == 0)
	{
		return (head);
	}

	for (; index > 0; index--)
	{
		head = head->next;
	}
	return (head);
}
