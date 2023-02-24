#include "main.h"
/**
*print_triangle - a function that prints a triangle
*@size: the size
*Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int n, m, b;

	n = size - 1;
	b = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	while (size > 0)
	{
		m = n;
		while (m > 0)
		{
			_putchar(' ');
			m--;
		}
		m = b - n;
		while (m > 0)
		{
			_putchar('#');
			m--;
		}
		n--;
		size--;
		_putchar('\n');
	}
	}
}
