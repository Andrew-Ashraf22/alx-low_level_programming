#include "main.h"
/**
*_memset - fills memeory with a constant byte
*@n: number of bytes
*@s: starting byte
*@b: the constant byte
*Return: a pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
