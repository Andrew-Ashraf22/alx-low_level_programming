#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_calloc - allocate memory
*Return: pointer to memory
*@nmemb: num of elements
*@size: size of each element
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int loc, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	loc = nmemb * size;

	p = malloc(loc);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < loc; i++)
	{
		p[i] = 0;
	}
	return (p);
}
