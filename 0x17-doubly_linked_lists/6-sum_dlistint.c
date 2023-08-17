#include "lists.h"

/**
 * sum_dlistint - returns the sum of all nodes in list
 * @head: the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		temp = head->next;
	}
	return (sum);
}
