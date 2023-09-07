#include "lists.h"
void free_n(dlistint_t *temp);
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: the list
 * @index: index to del
 * Return: if succ, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int j = 0;
	dlistint_t *temp = *head, *temp2 = *head;

	if ((int)index < 0 || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if (!((*head)->next))
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		((*head)->next)->prev =  NULL;
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp2->next)
	{
		temp2 = temp2->next;
		j++;
	}
	if (index == j)
	{
		(temp2->prev)->next = NULL;
		free(temp2);
		return (1);
	}
	if (index > j)
		return (-1);
	while (index - 1)
	{
		temp = temp->next;
		index--;
	}
	free_n(temp);
	return (1);
}

/**
 * free_n - coninue the func
 *@temp: node
 */
void free_n(dlistint_t *temp)
{
	dlistint_t *temp2;

	((temp->next)->next)->prev = temp;
	temp2 = temp->next;
	temp->next = (temp->next)->next;
	free(temp2);
}