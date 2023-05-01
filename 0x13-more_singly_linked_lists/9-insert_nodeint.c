#include "lists.h"
/**
  *insert_nodeint_at_index - insert a node at a certin index
  *@head: the list
  *@idx: index to insert new node
  *@n: new node data
  *Return: new node address
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp2 = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else if (idx == 1)
	{
		new->next = (*head)->next;
		(*head)->next = new;
		return (new);
	}
	else
	{
		while (temp2 && i < idx)
		{
			if (i == (idx - 1))
			{
				new->next = temp2->next;
				temp2->next = new;
				return (new);
			}
			else
			{
				i++;
				temp2 = temp2->next;
			}
		}
	}
	return (NULL);
}
