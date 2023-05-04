#include "main.h"
/**
  *binary_to_uint - convert binary to decimal
  *@b: string
  *Return: decimal value
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, res = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		res = (2 * res) + (b[i] - '0');
		i++;
	}
	return (res);
}
