#include "main.h"
int sqrte(int n, int k);
/**
*_sqrt_recursion - get the natural sqaure root
*@n: input
*Return: the square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrte(n, 0));
}
/**
*sqrte - get square root
*@n: input
*@k: iterator
*Return: square root
*/
int sqrte(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (sqrte(n, k + 1));
}
