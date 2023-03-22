#include "main.h"
/**
*print_last_digit - print the value of the last digit in a number
*@n: num to be checked
*Return: the last digit
*/
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;

		i = n % 10;
	if (i < 0)
		a = -a;

		_putchar(i + '0');

		return (i);
}
