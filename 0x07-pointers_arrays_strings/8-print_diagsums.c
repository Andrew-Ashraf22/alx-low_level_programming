#include "main.h"
#include <stdio.h>
/**
*print_diagsums - sum of 2 diagonal squares
*@a: the pointer
*@size: the size
*/
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, k;

	for (k = 0; k < size; k++)
	{
		i = j + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		j += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", i, j);
}
