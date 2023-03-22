#include "main.h"
/**
*_isalpha - see if a char is a digit
*@c: the char to be checked
*Return: 1 if it's a letter 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
