#include "main.h"
/**
*_isdigit - checks for a digit in the entry
*@c: char to be checked
*Return: 1 if its a digit 0 if not
*/
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);

}
