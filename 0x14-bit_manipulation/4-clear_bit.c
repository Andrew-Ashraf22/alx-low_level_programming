#include "main.h"
/**
  *clear_bit - set bit to 0
  *@n : num
  *@index: index to change
  *Return: 1 if succses -1 if not
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
