#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*array_range - make an array from min to max
*Return: pointer to memory
*@min: the min
*@max: the max
*/

int *array_range(int min, int max)
{
	int i = 0, k;
	int *p;

	if (min > max)
		return (NULL);

	k = max - min + 1;
	p = malloc(sizeof(int) * k);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
