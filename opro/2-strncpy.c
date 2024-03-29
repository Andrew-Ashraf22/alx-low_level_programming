#include "shell.h"
/**
*_strncpy - copy a string
*Return: the dest string
*@dest: string1
*@src: string2
*@n: number of char to be copied of src
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
