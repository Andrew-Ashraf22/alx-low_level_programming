#include "lists.h"
/**
  *delete_nodeint_at_index - remove node at certin index
  *@head: list
  *@index: index to delete at
  *Return: 1 if deleted -1 if failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *prev = NULL;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = (temp)->next;
		free(temp);
		return (1);
	}
	while (temp && i != index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);
	return (1);
}
