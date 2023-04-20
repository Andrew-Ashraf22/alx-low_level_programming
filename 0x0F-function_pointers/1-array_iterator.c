#include "function_pointers.h"
#include <stdio.h>
/**
  *array_iterator - execute each function in the array
  *@array: the array
  *@size: array size
 *@action: pointer to func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
