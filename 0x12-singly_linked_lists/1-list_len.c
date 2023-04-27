#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *list_len - get the size
  *@h: pointer to list
  *Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
