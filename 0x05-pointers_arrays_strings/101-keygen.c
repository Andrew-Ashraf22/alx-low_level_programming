#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - generate a random password
*Return: 0
*/
int main(void)
{
	int pass[100];
	int i, sum, j;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2722 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}
