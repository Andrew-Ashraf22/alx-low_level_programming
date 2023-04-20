#include "function_pointers.h"
#include <stdio.h>
/**
  *int_index - search for index
  *@array: the array
  *@size: array size
  *@cmp: pointer to func
  *Return: index of first non 0 from cmp
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
