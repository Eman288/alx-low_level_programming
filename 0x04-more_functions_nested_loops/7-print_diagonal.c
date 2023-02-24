#include "main.h"
/**
*print_diagonal - a function that draws a diagonal line
*@n: a num
*Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int m, k;

	k = 0;
	while (n > 0)
	{
		m = k;
		while (m > 0)
		{
			_putchar(' ');
			m--;
		}
		k++;
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
