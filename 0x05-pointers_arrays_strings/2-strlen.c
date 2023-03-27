#include "main.h"
/**
*_strlen - return the length of a string
*Return: the length
*@s: a string
*/
int _strlen(char *s)
{
	int sum = 0;

	while (*s != '\0')
	{
		sum++;
		s++;
	}
	return (sum);
}
