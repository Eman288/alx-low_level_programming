#include "main.h"
/**
*_isdigit - a function that checks for a digit
*@c: a num
*Return: Always 0 (Success)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
