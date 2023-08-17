#include "lists.h"

/**
 * print_dlistint - prints the list
 * @h: the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    int i = 0;

    if (h == NULL)
        return (i);
    
    while (h)
    {
        printf("%d\n", h->n);
        i++;
        h = h->next;
    }
    return (i);
}