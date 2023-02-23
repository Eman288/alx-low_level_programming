#include "main.h"
/**
*print_line - a function that draws a straight line
*@n:a num
*Return: Always 0 (Success)
*/
void print_line(int n)
{
	while (n != 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
