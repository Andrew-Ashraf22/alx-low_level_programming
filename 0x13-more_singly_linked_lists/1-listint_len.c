#include "lists.h"
/**
  *listint_len - get the size
  *@hi: pointer to list
  *Return: the size
  */
size_t listint_len(const listint_t *hi)
{
	unsigned int size = 0;

	while (hi)
	{
		size++;
		hi = hi->next;
	}
	return (size);
}
