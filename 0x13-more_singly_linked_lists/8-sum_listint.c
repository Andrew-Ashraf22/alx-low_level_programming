#include "lists.h"
/**
  *sum_listint - sum all n's in list
  *@head: the head
  *Return: the sum
  */
int sum_listint(listint_t *head)
{
	listint_t *holder;
	int sum = 0;

	holder = head;

	while (holder)
	{
		sum += holder->n;
		holder = holder->next;
	}
	return (sum);
}
