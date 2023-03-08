#include "main.h"
/**
*is_prime_number - Write a function that returns
*div - a fun that helps
*@m: a num
*@s: a num
*@n: a num
*Return: Always 0 (Success)
*/
int div(int n, int m, int s)
{
	if (m > n)
	{
		return (s);
	}
	if (n % m == 0)
	{
		s++;
	}
	div(n, m + 1, s);
}
int is_prime_number(int n)
{
	if (div(n, 1, 0) == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
