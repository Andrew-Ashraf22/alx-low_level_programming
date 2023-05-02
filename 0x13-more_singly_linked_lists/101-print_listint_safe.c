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
	unsigned int size = 0;
	listint_t *slow = head, *fast = head;
	bool looped = false;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		size++;
		if (slow == fast)
		{
			looped = true;
			break;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
	}
	if (looped)
	{
		listint_t *temp = head;
		listint_t *temp2 = slow;
		while (temp != temp2)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			size++;
		}
	while (temp2 != slow)
	{
		printf("[%p] %d\n", (void *)temp2, temp2->n);
		temp2 = temp2->next;
		size++;
	}

	}

	printf("[%p] %d\n", (void *)temp2, temp2->n);

	else
	{
		listint_t *temp = head;
		while (temp)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			size++;
		}
	}
	return (size);
}
