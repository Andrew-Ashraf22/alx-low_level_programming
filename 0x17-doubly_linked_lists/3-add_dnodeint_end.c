#include "lists.h"

/**
 * add_dnodeint_end - adds a node at end of list
 * @head: the list
 * @n: value of new node
 * Return: the address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *temp = *head;

    new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

    new->n = n;

    if (temp == NULL)
    {
        new->next = NULL;
        new->prev = NULL;
        *head = new;
    }
    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = new;
    new->prev = temp;
    new->next = NULL;

    return (new);
}