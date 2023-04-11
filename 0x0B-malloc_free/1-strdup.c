#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - assign a duplicate to a new memory location
*Return: pointer to duplicate
*@str: the str
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		s[j] = str[j];
	return (s);
}
