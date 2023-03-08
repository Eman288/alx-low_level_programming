#include "main.h"
/**
*sq - a sqrt fun
*@n: anum
*@m: a num
*Return: Always 0 (Success)
*/
int sq(int n, int m)
{
	if (m == 0 || m == 1)
	{
		return (m);
	}
	else if (n * n < m)
	{
		return (sq(n + 1, m));
	}
	else if (n * n == m)
	{
		return (n);
	}
	return (-1);
	return (-1);
}
/**
*_sqrt_recursion - a function that returns the natural square root of a number.
*@n: a num
*Return: Always 0 (Success)
*/

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sq(i, n));
	}
}
