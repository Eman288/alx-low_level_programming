#include "main.h"

/**
*print_binary - a function that prints the binary representation of a number.
*@n: the number
*/
void print_binary(unsigned long int n)
{
	int m, c;

	unsigned long int num;

	c = 0;
	for (m = 63; m >= 0; m--)
	{
		num = n >> m;
		if (num == 1)
		{
			_putchar('1');
		}
		else if (c)
		{
			_putchar('0');
		}
		if (!c)
		{
			_putchar('0');
		}
	}
}
