#include "main.h"
/**
*print_last_digit - print the value of the last digit in a number
*@n: num to be checked
*Return: the last digit
*/
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (n > 0)
		return (i);
	else if (n == 0)
		return (0);
	else
		return (10 - i);
}
