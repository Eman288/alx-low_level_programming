#include "main.h"
/**
*_pow_recursion - function that returns the value
*@x: a num
*@y: a num
*Return: Always 0 (Success)
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
