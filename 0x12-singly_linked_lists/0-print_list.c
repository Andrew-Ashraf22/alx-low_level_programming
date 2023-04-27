#include "lists.h"
#include <stdio.h>
/**
  *print_list - print elemetns
  *@h: pointer to list
  *Return: the size
  */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
	h = h->next;
	size++;
	}
	return (size);
}
