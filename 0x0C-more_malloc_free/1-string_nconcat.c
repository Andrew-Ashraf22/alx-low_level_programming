#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*string_nconcat - concatenates two strings
*Return: a pointer to the new memory
*@s1: string 1
*@s2: string 2
*@n: num of bytes
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int i = 0, j = 0, k = 0, m = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		s = malloc(sizeof(char) * (i + j + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (i + n + 1));
	}
	if (!s)
		return (NULL);

	while (k < i)
	{
		s[k] = s1[k];
		k++;
	}
	while (n < j && k < (i + n))
	{
		s[k] = s2[m];
		k++;
		m++;
	}
	while (n >= j && k < (i + j))
	{
		s[k] = s2[m];
		k++;
		m++;
	}
	s[k] = '\0';
	return (s);
}
