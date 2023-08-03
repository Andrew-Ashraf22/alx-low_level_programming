#include "main.h"
/**
  *flip_bits - num of bits needed to flip
  *@n: num1
  *@m: num2
  *Return: num of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0, diff = n ^ m;

	while (diff)
	{
		if (diff & 1)
			i++;
		diff = diff >> 1;
	}
	return (i);
}
