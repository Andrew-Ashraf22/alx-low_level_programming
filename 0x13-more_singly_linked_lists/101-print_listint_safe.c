#include "lists.h"
#include <stdbool.h>
#include <stddef.h>
/**
  *print_listint_safe - prints a list
  *@head: the head
  *Return: size
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head, *temp = head, *temp2 = slow;
	bool looped = false;
	unsigned int size = 0;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		size++;
		if (slow == fast)
		{
			looped = true;
			temp2 = slow;
			while (temp != temp2)
			{
				temp = temp->next;
				temp2 = temp2->next;
			}
		}
	}
	if (looped)
	{
		while (head != temp)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)temp, temp->n);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	return (size);
}
