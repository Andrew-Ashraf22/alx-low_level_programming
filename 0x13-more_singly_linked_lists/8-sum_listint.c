#include "lists.h"
/**
  *sum_listint - sum all n's in list
  *@head: the head
  *Return: the sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head->next == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
