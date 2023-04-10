#include "main.h"
#include <stdio.h>
/**
*main - print number of cl arguments
*@argc: number of cl arguments
*@argv: an array of cl arguemnts
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
