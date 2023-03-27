#include "main.h"
/**
*print_rev - print a string in reverse
*@s: string to reverse
*/
void print_rev(char *s)
{
	int sum = 0, i;

	while (*s != '\0')
	{
		sum++;
		s++;
	}
	s--;
	for (i = sum; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
