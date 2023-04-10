#include "main.h"
/**
*_strncat - concatenates 2 strings limited to n chars from src
*Return: the concatenates string
*@dest: sting1
*@src: string2
*@n: number of bytes from src
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (k < n)
		{
		dest[i] = src[j];
		i++;
		j++;
		k++;
		}
		else
			break;
	}
	dest[i] = '\0';
	return (dest);
}
