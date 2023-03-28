#include "main.h"
/**
*_atoi - covert string to integer
*Return:the converted int
*@s: the string
*/
int _atoi(char *s)
{
	int i, j, k, l, o, digit;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	o = 0;
	digit = 0;

	while (s[l] != '\0')
		l++;
	while (i < l && o == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			o = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			o = 0;
		}
		i++;
	}
	if (o == 0)
		return (0);
	return (k);
}
