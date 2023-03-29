#include "main.h"
/**
*_strcat - concatenates 2 strings
*Return: the concatenated string
*@src: string1
*@dest: string2
*/
char *_strcat(char *dest, char *src)
{
	int sum = 0, sum2 = 0;

	while (dest[sum] != '\0')
	{
		sum++;
	}
	while (src[sum2] != '\0')
	{
		dest[sum] = src[sum2];
		sum++;
		sum2++;
	}
	dest[sum] = '\0';
	return (dest);
}
