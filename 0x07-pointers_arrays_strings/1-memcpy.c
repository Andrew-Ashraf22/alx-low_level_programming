#include "main.h"
/**
*_memcpy - copy n bytes from src to dest
*Return: dest
*@n: number of bytes
*@src: the source
*@dest: the destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
