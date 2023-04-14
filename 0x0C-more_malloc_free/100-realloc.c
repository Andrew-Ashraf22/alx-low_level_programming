#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_realloc - relocates memory
*Return: a pointer to new location
*@ptr: pointer
*@old_size: old size
*@new_size: new size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *p2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);

	if (!p)
		return (NULL);
	p2 = p;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = p2[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = p2[i];
	}
	free(p);
	return (p);
}
