#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_strings - print strings seperated by a string
  *@separator: the separator
  *@n: number of strings
  *@...: strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *tempstr;
	unsigned int i;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		tempstr = va_arg(strs, char *);

		if (tempstr == NULL)
			printf("(nil)");
		else
			printf("%s", tempstr);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
