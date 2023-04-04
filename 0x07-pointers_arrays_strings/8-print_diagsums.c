#include "main.h"
#include <stdio.h>
/**
*print_diagsums - sum of 2 diagonal squares
*@a: the pointer
*@size: the size
*/
void print_diagsums(int *a, int size)
{
	int i, j, k;

	i = 0;
	j = 0;

	for (k = 0; k < size; k++)
	{
		i += j + a[k];
		a += size;
	}
	a -= size;
	for (k = 0; k < size; k++)
	{
		j += a[k];
		a -= size;
	}
	printf("%d, %d\n", i, j);
}
