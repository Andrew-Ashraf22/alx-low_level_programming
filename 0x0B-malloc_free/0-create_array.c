#include "main.h"
#include <stdlib.h>
/**
*create_array - intitalize an array with a specific char
*Return: pointer to array
*@size: the size
*@c: the char
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
