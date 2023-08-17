#include "lists.h"

/**
 * sum_dlistint - returns the sum of all nodes in list
 * @head: the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *temp = head;

    if (head == NULL)
        return (0);
    
    if (temp->next == NULL)
    {
        return (temp->n);
    }
    while (temp->next)
    {
        sum += temp->n;
        temp = temp->next;
    } 
    return (sum);
}