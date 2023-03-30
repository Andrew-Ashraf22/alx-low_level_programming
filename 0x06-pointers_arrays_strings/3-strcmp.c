#include "main.h"
/**
*_strcmp - compare 2 strigns
*@s1: string 1
*@s2: string 2
*Return: 0 if equal and the diffrence if not equal 
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else if (s1[i] > s2[i])
		{
			return ((s1[i] - s2[i]));
		}
		else
			return (-(s2[i] - s1[i]));
	}
	return (0);
}
