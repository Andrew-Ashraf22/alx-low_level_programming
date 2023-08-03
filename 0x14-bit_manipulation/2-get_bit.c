#include "main.h"
/**
  *get_bit - get bit at index
  *@n: num
  *@index: place to get bit
  *Return: bit value
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
