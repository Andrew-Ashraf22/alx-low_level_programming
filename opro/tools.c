#include "shell.h"


int myatoi(char *s)
{
	int i = 0;
	unsigned long int result = 0;

	if (*s == '+')
		s++;

	for (i = 0;  s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
			if (result > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (result);
}




int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	for (i = 0; i < n; ++i)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] < s2[i]) ? -1 : 1;
		}
		if (s1[i] == '\0')
		{
			return 0;
		}
	}
	return 0;
}

void _strcpy(char *dest, const char *src)
{
	while (*src != '\0') 
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
}


size_t _strlen(const char *str)
{
	const char *h = str;

	while (*h != '\0')
	{
		++h;
	}
	return h - str;
}

