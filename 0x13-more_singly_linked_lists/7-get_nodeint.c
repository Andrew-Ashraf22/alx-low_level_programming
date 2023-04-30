#include "lists.h"
/**
  *get_nodeint_at_index - get node at index
  *@head: pointer to list
  *@index: index for node to be found
  *Return: pointer to node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}
