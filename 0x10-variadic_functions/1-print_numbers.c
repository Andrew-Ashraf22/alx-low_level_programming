#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_numbers - print numbers seperated by a string
  *@separator: string to seperate numbers
  *@n: amount of numbers
  *@...: numbers
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
