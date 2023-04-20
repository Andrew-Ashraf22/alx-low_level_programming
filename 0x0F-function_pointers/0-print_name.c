#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *print_name - prints the name
  *@name: the name
  *@f: pointer to func
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
