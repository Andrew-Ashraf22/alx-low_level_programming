#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all - function return the sum
  *@n: num of parameters
  *@...: variable number of parametrs
  *Return: the sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}
	va_end(a);
	return (sum);
}
