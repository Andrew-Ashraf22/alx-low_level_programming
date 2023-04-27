#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  *add_node_end - add a node at the end
  *@head: the head
  *@str: string to duplicate
  *Return: pointer to new tail
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	unsigned int size = 0;

	while (str[size])
		size++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = size;
	new->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
