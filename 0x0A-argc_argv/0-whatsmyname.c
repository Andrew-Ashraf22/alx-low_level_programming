#include "main.h"
#include <stdio.h>
/**
*main - prints file name
*@argc: number of cl arguments
*@argv: an array of cl arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
