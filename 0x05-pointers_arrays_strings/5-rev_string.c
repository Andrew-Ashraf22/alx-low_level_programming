#include "main.h"
/**
*rev_string - reverse a string
*@s: string to reverse
*/
void rev_string(char *s)
{
	char p = s[0];
	int length = 0, i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		length--;
		p = s[i];
		s[i] = s[length];
		s[length] = p;
	}
}
