#include "main.h"
/**
  *set_bit - set bit to 1
  *@n: num
  *@index: index to set at
  *Return: 1 if worked -1 if not
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
