#include "main.h"
/**
*_islower - see if char is lowercase
*@c: the char that will be checked
*Return:1 if char is lowecase and 0 if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
