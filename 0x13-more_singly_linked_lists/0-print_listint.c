#include "lists.h"
/**
  *print_listint - prints all elements
  *@hi: the first node
  *Return: num of nodes
  */
size_t print_listint(const listint_t *hi)
{
	unsigned int size = 0;

	while (hi)
	{
		printf("%d\n", hi->n);
		size++;
		hi = hi->next;
	}
	return (size);
}
