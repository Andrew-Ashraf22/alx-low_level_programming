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
	}

	else if (idx == 1)
	{
		new->next = (*head)->next;
		(*head)->next = new;
	}

	else
	{
		while (temp2 && (idx - 1) > i)
		{
			temp2 = temp2->next;
			i++;
		}
	}

	if (temp2 == NULL)
		return (NULL);

	if (idx != 0 && idx != 1)
	{
	new->next = temp2->next;
	temp2->next = new;
	}
	return (new);
}
