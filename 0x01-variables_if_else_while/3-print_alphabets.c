#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Return: 0(success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch >= 'a' && ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch >= 'A' && ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
