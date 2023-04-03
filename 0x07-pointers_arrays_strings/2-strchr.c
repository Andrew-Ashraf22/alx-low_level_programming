#include "main.h"
/**
*_strchr - search for c in s
*Return: the first occurence of c in s
*@s: string to be checked
*@c: character to be found
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
