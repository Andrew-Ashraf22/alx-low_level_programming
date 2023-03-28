#include "main.h"
/**
*puts_half - print second half of a string
*@str: the string
*/
void puts_half(char *str)
{
	int n, i, sum = 0;
	char *p = str;

	while (p[sum] != '\0')
	{
		sum++;
	}
	n = (sum / 2);
	if (n % 2 == 1)
	{
		n = (sum - 1) / 2;
	}
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
