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
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
