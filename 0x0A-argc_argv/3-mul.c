#include "main.h"
#include <stdio.h>
int convertor(char *s);
/**
*main - print number of cl arguments
*@argc: number of cl arguments
*@argv: an array of cl arguemnts
*Return: 0
*/
int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = convertor(argv[1]);
	num2 = convertor(argv[2]);
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}

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
