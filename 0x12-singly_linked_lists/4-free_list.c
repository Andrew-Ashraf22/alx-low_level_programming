#include "lists.h"
#include <stdlib.h>
/**
  *free_list - free the list
  *@head: the list
  */
void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
