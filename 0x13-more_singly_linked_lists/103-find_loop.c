#include "lists.h"
/**
  *find_listing_loop - finds a loop
  *@head: the list
  *Return: address of loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listing_t *fast = head;
	listing_t *slow = head;

	if (head == NULL)
		return (NULL);

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return (fast);
	}
	return (NULL);
}
