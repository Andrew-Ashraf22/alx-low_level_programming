#include "main.h"
/**
  *print_binary - print binary of a decimal
  *@n: decimal num
  */
void print_binary(unsigned long int n)
{
	unsigned int t = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (t <= n)
		t <<= 1;

	t >>= 1;
	while (t > 0)
	{
		if (n & t)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		t >>= 1;
	}
}
