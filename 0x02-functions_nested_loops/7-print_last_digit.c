#include "main.h"
/**
*print_last_digit - a function that prints the last digit of a number.
*@a: the num
*Return: Always 0 (Success)
*/
int print_last_digit(int a)
{
	if (a % 10 > 0)
	{
		return (a % 10);
	}
	return ((a % 10) * -1);
}

