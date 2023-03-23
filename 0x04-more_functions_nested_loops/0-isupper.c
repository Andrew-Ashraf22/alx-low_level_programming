#include "main.h"
/**
*_isupper - check if a char is uppercase
*Return: 1 if char is uppercase 0 if not
*/
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
