#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: the list
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i = idx, size = 0;
    dlistint_t *new, *temp, *temp2;

    temp = *h;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;

    while (temp2)
    {
        temp2 = temp2->next;
        size++;
    }

    if (idx > size - 1)
        return (NULL);

    while (i)
    {
        temp = temp->next;
        i--;
    }

    new->next = temp;
    new->prev = temp->prev;
    (temp->prev)->next = new;
    temp->prev = new;

    if (idx == 0)
        *h = new;
    

    return (new);
 
}