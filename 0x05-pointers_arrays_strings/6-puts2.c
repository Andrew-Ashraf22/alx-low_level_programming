#include "main.h"
/**
*puts2 - print every other character
*@str: string
*/
void puts2(char *str)
{
	int i, sum = 0;
	char *p = str;

	while (p[sum] != '\0')
	{
		sum++;
	}
	for (i = 0; i < sum; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
