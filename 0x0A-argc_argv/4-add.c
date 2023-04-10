#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * convertor - converts a string to an integer
 * @s: string to be converted
 * Return: the int
 */
int convertor(char *s)
{
	int i, j, num, len, f, digit;
	i = 0;
	j = 0;
	num = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			num = num * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (num);
}

/**
 * checker - checks for digits in a string
 * @str: string
 * Return: 0
 */
int checker(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str)) 
	{
		if (!isdigit(str[i])) 
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
*main - add numbers
*@argc: number of cl arguments
*@argv: an array of cl arguemnts
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 1, sum = 0, t;

	while (i < argc)
	{
		if (checker(argv[i]))
		{
			t = convertor(argv[i]);
			sum += t;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
