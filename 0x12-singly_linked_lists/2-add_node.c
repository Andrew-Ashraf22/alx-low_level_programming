#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  *add_node - adds a node
  *@head: the head
  *@str: string to be dduplicated
  *Return: pointer to the new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int size = 0;

	while (str[size])
		size++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = size;
	new->next = (*head);
	*head = new;
	return (*head);
}
