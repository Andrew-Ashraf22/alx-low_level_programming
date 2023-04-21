#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_all - prints anything
  *@format: format of the parameter
  *@...: parameter for anything
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *sep = "";

	va_list a;

	va_start(a, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(a, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(a, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(a, double));
					break;
				case 's':
					string = va_arg(a, char*);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(a);
}
